#!/bin/sh
############################################################################
# Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Eduardo Ramos                                                    #
############################################################################

CSVName="FlirThermalData.csv"
execPath="./dune-flir-metadata"

usage() {
  echo "Usage: $0  -s=start_date -e=end_date -d=device_name (-l=logs_folder || -o=output_file_name) [-jc] [-fn=data_filename][-nr] [-c]"
  echo "  -s  start      start date from which to start processing at the photos directory (yyyymmdd_hhmmss or partial)"
  echo "  -e  end        date at which to stop processing at the photos directory(yyyymmdd_hhmmss or partial)"
  echo "  -d  device     path to the device to be mounted in order to access the photos"
  echo "  -l  logs       vehicle logs path"
  echo "  -o  output     output path, overrides the logs parameter and outputs to a single file"
  echo "  -c  copy       enable file copying to logs"
  echo "  -jc just-copy  disable image analisys and enable file copying to logs"
  echo "  -fn file-name  name of the output file (defaults to \"FlirThermalDatav.csv\")"
  echo "  -nr no-replace prevents the program from overwriting existing data files"
}

inRange() {
  [ "$START" \< "$1" ] && [ "$END" \> "$1" ]
}

findLog() {
  currDayPath=""
  nextDayPath=""
  currTimePath=""
  nextTimePath=""

  for fullDayFile in $LOGS/*; do
    # check for directory naming constraints
    if [ -n "$(echo $fullDayFile | sed -E '/[.\/a-z\_]*\/[0-9]{8}$/g')" ];
    then
      continue
    fi
    local dayFile=$(basename $fullDayFile)

    for fullTimeFile in $LOGS/$dayFile/*; do
      local timeFile=$(basename $fullTimeFile)
      local logFile="$(printf "%s_%s" $dayFile $timeFile)"

      #parse filenames to epoch for UTC comparission
      fileToEpoch $logFile
      local epochLogFile=$fileToEpochReturn
      fileToEpoch $1
      local epochParam=$(($fileToEpochReturn+$UTCOffset))

      if [ $epochLogFile \< $epochParam ] || [ $epochLogFile = $epochParam ]
      then
        currDayPath=$dayFile
        currTimePath=$timeFile
      else
        nextDayPath=$dayFile
        nextTimePath=$timeFile
        return
      fi
    done
  done
}

# get epoch time from string in format yyyyMMdd_hhmmss
fileToEpoch() {
  local name=$1
  local year=`echo $name | cut -b 1-4`
  local month=`echo $name | cut -b 5-6`
  local day=`echo $name | cut -b 7-8`
  local hour=`echo $name | cut -b 10-11`
  local minute=`echo $name | cut -b 12-13`
  local second=`echo $name | cut -b 14-15`
  local date="$year-$month-$day $hour:$minute:$second UTC"
  # date "+%s" -d "2013-02-20 08:41:15 UTC"
  fileToEpochReturn=$(date +%s -d "$date")
}

getEpochFilename() {
  # $1 is in the format "YYYYMMDD_hhmmss_(3 digits for miliseconds)"
  fileToEpoch $1
  if [ -z $UTCOffset ];
  then
      UTCOffset=0
  fi
  epochFilename="$(($fileToEpochReturn+$UTCOffset))".`echo $1 | cut -b 17-19`.jpg
}

fillUTCOffset() {
  getEpochFilename $(basename $filename _R.jpg)
  local tempTime=${epochFilename%%\.*}
  local output="$($execPath $filename)"
  local tempUTCTime="${output%%,*}"
  UTCOffset=$(($tempUTCTime - $tempTime))
  # printf "\nUTC Offset: %d\n\n" $UTCOffset
}

getNextPhotoDir() {
  for photoDir in $photosPath/*; do
    currPhotoIndex="$(ls $photoDir | wc -l)"
    if [ $currPhotoIndex -lt 1000 ];
    then
      currPhotosDir=$photoDir
      break
    fi
  done

  # if all existing directories are full
  if [ $currPhotoIndex -eq 1000 ];
  then
    currPhotoIndex=0
    local newPhotoDirIndex=$(($(basename $photoDir)+1))
    local newFolder="$(printf "%.6d" $newPhotoDirIndex)"
    currPhotosDir=$photosPath/$newFolder
    mkdir $currPhotosDir
  fi

  # no directory exists in $photoDir
  if [ "$(basename $photoDir)" = "*" ];
  then
    currPhotoIndex=0
    currPhotosDir=$photosPath/000000
    mkdir $currPhotosDir
  fi
}

for i in "$@"
do
case $i in
  -e=*|--extension=*)
  END="${i#*=}"
  shift # past argument=value
  ;;
  -s=*|--searchpath=*)
  START="${i#*=}"
  shift # past argument=value
  ;;
  -d=*|--device=*)
  DEVICE="${i#*=}"
  shift # past argument=value
  ;;
  -l=*|--logs=*)
  LOGS="${i#*=}"
  shift # past argument=value
  ;;
  -o=*|--output=*)
  OUTPUT="${i#*=}"
  shift # past argument=value
  ;;
  -c|--copy)
  COPY="copy"
  shift # past argument=value
  ;;
  -jc|--just-copy)
  JUSTCOPY="justcopy"
  shift # past argument=value
  ;;
  -fn=*|--file_name=*)
  CSVName="${i#*=}"
  shift # past argument=value
  ;;
  -nr|--no-replace)
  NOREPLACE="noreplace"
  shift # past argument=value
  ;;
  *)
    printf "Unkown option %s\n\n" $i # unknown option
    usage
    exit 1
  ;;
esac
done

if [ -z $DEVICE ] || [ -z $START ] || [ -z $END ] || [ -z $LOGS -a -z $OUTPUT ];
then
  printf 'Some required variables are not defined\n\n'
  usage
  exit 1
fi

if [ $START \> $END ] || [ $START = $END ]
then
  printf 'The start(-s) and end(-e) dates are not compatible\n\n'
  exit 1
fi

noSave=0
nextLog="0"
savePath="$(printf %s$CSVName $OUTPUT)"
epochFilename=""
currPhotosDir=""
currPhotoIndex=0

if [ ! -z $OUTPUT ];
then
  printf DateTimeOriginal,GPSLatitude,GPSLongitude,GPSAltitude,MAVRoll,MAVPitch,MAVYaw,Temp\(°C\) > $savePath
fi

for top_filename in $DEVICE/*; do
  # check for directory naming contraints
  if [ -n "$(echo $top_filename | sed -E '/[.\/a-z\_]*\/[0-9]{8}_[0-9]{6}$/g')" ];
  then
    printf "Skipped file: $top_filename; For not keeping the naming standard\n"
    continue
  fi

  for filename in $top_filename/*; do
    truncFilename="$(basename $filename _R.jpg)"
    truncFilename=${truncFilename%_*}

    # check if the current file is in the specified range
    if inRange $truncFilename;
    then
      day=${truncFilename%_*}
      inputTime=${truncFilename#*_}

      # calculate UTCOffset if undefined
      if [ -z $UTCOffset ];
      then
          fillUTCOffset
      fi

      # parse filename to epoch for UTC comparisson
      fileToEpoch $truncFilename
      epochTruncFilename=$(($fileToEpochReturn+$UTCOffset))

      # check if the next log file should be used to store info about the current file
      if [ $epochTruncFilename \> $nextLog -o $epochTruncFilename = $nextLog ]  && [ -z $OUTPUT ];
      then
        findLog $truncFilename

        if [ -z $nextDayPath ] || [ -z $nextTimePath ];
        then
          # no future log file found so prevent the above if from being true
          nextLog=9999999999
        else
          fileToEpoch "$(printf "%s_%s" $nextDayPath $nextTimePath)"
          nextLog=$fileToEpochReturn
        fi

        # fill the new required paths
        generalPath=$LOGS/$currDayPath/$currTimePath
        savePath=$generalPath/$CSVName
        photosPath=$generalPath/Photos

        # verify if there is already a photos directory in curr log
        if [ ! -d $photosPath ] && [ -n $COPY ];
        then
          currPhotosDir=$photosPath/000000
          mkdir -p $currPhotosDir
          currPhotoIndex=0
        else
          getNextPhotoDir
        fi

        # verify if there exists a data file already present and don't overwrite if the options is present
        # check also if there is a valid log file to save the items
        if [ -e $savePath -a $NOREPLACE ] || [ -z $currDayPath ] || [ -z $currTimePath ];
        then
          noSave=1
          printf "Skipped: $filename; No suitable log folder was found OR no overwrite option is enabled\n"
          continue
        else
          noSave=0
        fi

        if [ -z $JUSTCOPY ];
        then
          # add header to the new data.csv file
          printf DateTimeOriginal,GPSLatitude,GPSLongitude,GPSAltitude,MAVRoll,MAVPitch,MAVYaw,Temp\(°C\) > $savePath
        fi
      fi

      # check if the file should be processed
      if [ $noSave = 1 ];
      then
        printf "Skipped: $filename; No suitable log folder was found OR no overwrite option is enabled\n"
        continue
      fi

      # process file
      if [ -z $JUSTCOPY ];
      then
        $execPath $filename >> $savePath
        printf "Processed $filename\n"
        printf "Saving to: %s\n" $savePath
      fi

      # copy files to log if option is present
      if [ $COPY ] || [ $JUSTCOPY ];
      then
        getEpochFilename $(basename $filename _R.jpg)
        cp -p $filename $currPhotosDir/$epochFilename
        printf "Coppied $filename to $currPhotosDir/$epochFilename\n"
        if [ $currPhotoIndex -eq 999 ];
        then
          getNextPhotoDir
        else
          currPhotoIndex=$(($currPhotoIndex+1))
        fi
      fi
    else
      printf "Skipped file: $filename; Not in Range\n"
      continue
    fi
  done
done

exit 0