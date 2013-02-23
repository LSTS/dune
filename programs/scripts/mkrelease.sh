#! /bin/bash
#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: mkrelease.sh 12303 2013-01-01 02:14:25Z jbraga                    $:#
#############################################################################

DUNE_SVN='https://whale.fe.up.pt/svn/dune'
DUNE_SRC=dune-src
DUNE_BIN=dune-bin
DUNE_REP=dune-rep

# Exit with error if last command exited with error.
die_on_error()
{
    if [ $? -ne 0 ]; then
        echo "ERROR: $1."
        exit 1
    fi
}

# Exit with error if first argument is an empty string. Second
# argument holds the error message.
die_on_empty()
{
    if [ -z "$1" ]; then
        echo "ERROR: $2."
        exit 1
    fi
}

# Prepare temporary folders.
prepare_folders()
{
    echo "* Preparing temporary folders..."
    rm -rf "$DUNE_REP" "$DUNE_SRC" "$DUNE_BIN"
}

# Prepare repository
prepare_repository()
{
    svn info "$1" > /dev/null 2>&1
    if [ $? -eq 0 ]; then
        echo "* Removing existing source code base..."
        svn del -q -m "Preparing to overwrite release folder" "$dst"
        die_on_error "failed to delete release folder '$dst'"
    fi

    echo "* Creating release folder..."
    svn mkdir -q --parents -m "Creating release folder." "$dst" "$dst/packages"
    die_on_error "failed to create release folder '$dst'"
}

# Filter source code.
filter()
{
    folder="$1"
    file="$2"
    variable="$3"

    find "$folder" -name "$file" | while read f; do
        license=$(grep "$variable" "$f" | cut -f2 -d' ' | sed 's/"//g' | sed 's/)//g')
        if [ "$license" = "Proprietary" ]; then
            d="$(dirname "$f")"
            echo "* Removing proprietary folder '$d'... "
            rm -r "$d"
            die_on_error "failed to remove folder '$d'"
        fi
    done

    # Remove empty folders.
    echo "* Removing empty folders..."
    find "$folder" -type d -empty -delete
    die_on_error 'failed to remove empty folders'
}

# Export source code.
make_public()
{
    src="$DUNE_SVN/$1"
    dst="$DUNE_SVN/$2"

    # Prepare repository.
    prepare_repository "$dst"

    # Get reference revision.
    echo "* Finding source revision..."
    rev="$(svn info "$src" 2> /dev/null | grep 'Revision: ' | sed 's/Revision: //g')"
    die_on_empty "$rev" 'failed to extract source code revision'

    # Download release folder.
    echo "* Downloading release folder..."
    svn co -q "$dst" "$DUNE_REP"
    die_on_error 'failed to checkout release folder'

    # Export source code.
    echo "* Exporting source folder..."
    svn export -q "$src" "$DUNE_REP/source"
    die_on_error 'failed to export source folder'

    # Remove proprietary sources.
    filter "$DUNE_REP/source" "Task.cmake" "TASK_LICENSE"
    filter "$DUNE_REP/source" "Library.cmake" "LIBRARY_LICENSE"
    filter "$DUNE_REP/source" "Data.cmake" "DATA_LICENSE"

    echo "* Adding source code..."
    svn add -q "$DUNE_REP/source"
    die_on_error 'failed to add source code'

    echo "* Setting svn:keywords properties..."
    find "$DUNE_REP/source" -type f | grep -v .svn | while read f; do
        svn propset -q svn:keywords 'Id' "$f"
        die_on_error "failed to set properties on '$f'"
    done

    echo "* Setting dune:original property..."
    svn propset -q 'dune:original' "$src@$rev" "$DUNE_REP/source"
    die_on_error 'failed to set reference property'

    echo "* Uploading source code..."
    svn ci -q -m "Added source code." "$DUNE_REP"
}

make_private()
{
    src="$DUNE_SVN/$1"
    dst="$DUNE_SVN/$2"

    # Prepare repository.
    prepare_repository "$dst"

    echo "* Copying '$1' to '$2'..."
    svn copy -q -m "Creating release" "$src" "$dst/source"
    die_on_error "failed to copy '$1' to '$2'"
}

usage_and_die()
{
    echo "Usage: mkrelease.sh [option]"
    echo " -s prefix of seed folder"
    echo " -r prefix of release folder"
    echo " -b build and upload binaries"
    echo " -c cross compiler path"
    echo " -p release is public"
    exit 1
}

build()
{
    src="$DUNE_SVN/$1"
    cmake_flags="$2"

    echo "* Creating build folder."
    mkdir "$DUNE_BIN"
    die_on_error 'failed to create build folder'

    echo "* Downloading source code..."
    svn co -q "$src/source" "$DUNE_SRC"
    die_on_error 'failed to download source code'

    echo "* Running CMake..."
    cd $DUNE_BIN && cmake -DCMAKE_BUILD_TYPE=Release "$cmake_flags" "../$DUNE_SRC"
    die_on_error 'failed to run CMake'

    echo "* Build packages..."
    make -j4 package

    echo "* Uploading packages..."
    pkgs=$(ls -1 dune-[0-9]*.{tar.bz2,sh,exe,zip} 2> /dev/null)
    for pkg in $pkgs; do
        svn info "$src/packages/$pkg" > /dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo "* Removing obsolete package '$pkg'..."
            svn del -q -m "Removed obsolete package" "$src/packages/$pkg"
        fi

        echo "* Uploading package '$pkg'..."
        svn import -q -m "Imported package" "$pkg" "$src/packages/$pkg"
    done
}

# Release folder prefix.
rel_dir_prefix='releases'

while getopts ":s:r:c:bp" opt; do
    case $opt in
        s)
            rel_seed="$OPTARG"
            ;;
        r)
            rel_dir="$OPTARG"
            ;;
        b)
            build=1
            ;;
        p)
            rel_dir_prefix='public'
            ;;
        c)
            cross="-DCROSS=$OPTARG"
            ;;
        \?)
            echo "Invalid option: -$OPTARG" >&2
            ;;
    esac
done

# Build.
if [ -n "$build" ]; then
    if [ -z "$rel_dir" ]; then
        usage_and_die
    fi

    prepare_folders
    build "$rel_dir_prefix/$rel_dir" "$cross"
    exit 0
fi

# Prepare
if [ -z "$rel_seed" ] || [ -z "$rel_dir" ]; then
    usage_and_die
fi

prepare_folders
if [ "$rel_dir_prefix" = 'releases' ]; then
    make_private "$rel_seed" "$rel_dir_prefix/$rel_dir"
else
    make_public "$rel_seed" "$rel_dir_prefix/$rel_dir"
fi

exit 0
