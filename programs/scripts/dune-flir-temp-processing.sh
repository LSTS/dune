#!/bin/sh

CSVName="FlirThermalData.csv"

usage() {
	echo "Usage: $0  -s=start_date -e=end_date -d=device_name (-l=logs_folder || -o=output_file_name) [-jc] [-fn=data_filename][-nr] [-c]"
    echo "  -s  start      start date fro which to start processing (yyyymmdd_hhmmss or partial)"
    echo "  -e  end        date at which to stop processing (yyyymmdd_hhmmss or partial)"
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
	echo "In function with filename $1"

	currDayPath=""
	nextDayPath=""
	currTimePath=""
	nextTimePath=""

	for fullDayFile in $LOGS/*; do
		local dayFile=$(basename $fullDayFile)
		for fullTimeFile in $LOGS/$dayFile/*; do
			local timeFile=$(basename $fullTimeFile)
			logfile="$(printf "%s_%s" $dayFile $timeFile)"
			if [ $logfile \< $1 ] || [ $logfile = $1 ]
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

getEpochFilename() {
	local name=$1
	local year=`echo $name | cut -b 1-4`
	local month=`echo $name | cut -b 5-6`
	local day=`echo $name | cut -b 7-8`
	local hour=`echo $name | cut -b 10-11`
	local minute=`echo $name | cut -b 12-13`
	local second=`echo $name | cut -b 14-15`
	# date "+%s" -d "2013-02-20 08:41:15"
	local date="$year-$month-$day $hour:$minute:$second"
	epochFilename="$(date +%s -d "$date")".`echo $name | cut -b 17-19`.jpg
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

noSave=0
nextLog="0"
savePath="$(printf %s$CSVNAme $OUTPUT)"
epochFilename=""
currPhotosDir=""
currPhotoIndex=0

if [ ! -z $OUTPUT ]; then
printf DateTimeOriginal,GPSLatitude,GPSLongitude,GPSAltitude,MAVRoll,MAVPitch,MAVYaw,Temp\(°C\) > $savePath
fi

for top_filename in $DEVICE/*; do
	# printf "OUTSIDE FOR: $top_filename\n"

# find ../../test_photos -maxdepth 1 -regextype posix-extended -regex [.\/a-z\_]*/[0-9]{8}_[0-9]{6}$

	if [ -n "$(echo $top_filename | sed -E '/[.\/a-z\_]*\/[0-9]{8}_[0-9]{6}$/g')" ];
	then
		printf "Skipped file: $top_filename; For not keeping the naming standard\n"
		continue
	fi
	for filename in $top_filename/*; do
		# printf "INNER FOR: $filename\n"
		truncFilename="$(basename $filename _R.jpg)"
		truncFilename=${truncFilename%_*}
		# check if the curr file is in the specified range
		if inRange $truncFilename;
		then
			# printf "IS IN RANGE: $truncFilename\n"
			day=${truncFilename%_*}
			inputTime=${truncFilename#*_}
			# check if the next log file should be used to store info about the current file
			# printf "NEXTLOG: $nextLog\n"
			# printf "OUTPUT: $OUTPUT\n"
			if [ $truncFilename \> $nextLog -o $truncFilename = $nextLog ]  && [ -z $OUTPUT ];
			then
				findLog $truncFilename
				nextLog="$(printf "%s_%s" $nextDayPath $nextTimePath)"
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
					printf "Skipped: $filename\n"
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
				printf "Skipped: $filename\n"
				continue
			fi

			# process file
			if [ -z $JUSTCOPY ];
			then
				./dune-flir-duor-temp-logs $filename >> $savePath
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
		fi
	done
done