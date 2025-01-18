#!/bin/bash

nameCutter(){
  echo "${1}" | cut -d '.' -f 1
}

currentExercise=$(ls | grep -E '[0-9]{4}.c' | tail -n 1)
currentNumber=$(nameCutter "${currentExercise}")
newExerciseNumber=$(
  printf "%04d.c" $((10#$currentNumber+1))
)

editCompileShow(){
  fileName="${1}"
  output=$(nameCutter ${fileName}).out

#echo $fileName
#echo $output

  if [ ! -f ${fileName} ] || \
     [ ! -w ${fileName} ] || \
     [ ! -r ${fileName} ]
  then
    echo
    echo "[ERROR] Can't process file '${fileName}'."
    echo "Possible causes: "
    echo "1. The file might not exist."
    echo "2. Either the read or write permission, or both may not be set."
    echo "Check the file and try again."
    echo 

    return 3
  else
    # Edit
    vi "${fileName}"

    # Compile
    gcc ${fileName} -o ${output} && ./${output}

    # Show
    cat ${fileName}
  fi
}

if [ -z "${1}" ] #  When the user doesn't pass any arguments, create a new file
then
  > ${newExerciseNumber}
  editCompileShow ${newExerciseNumber}
else # When the user passes an argument it's time to test several options
  case "${1}" in
  ## The '-el' argument stands for 'Edit the Last file'
  -el)
    shift
    editCompileShow ${currentExercise}
    exit 0
  ;;
  ## The '-ep' argument stands for 'Edit a Pre-existing file'
  -ep)
    shift
    if [ -z "${1}" ]
    then
      echo
      echo "[ERROR] This option requires the name of a pre-existing file."
      echo "Here are the files found in the current directory"
      echo
      ls *c | xargs -L 4
      echo
      exit 1
    else
      editCompileShow ${1}
      exit 0
    fi
  ;;
  *)
    echo "Invalid option" 
    exit 2
  ;;
  esac
fi

