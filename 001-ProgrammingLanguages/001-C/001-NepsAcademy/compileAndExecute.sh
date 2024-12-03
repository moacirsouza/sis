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

echo $fileName
echo $output

#  # Edit
#  vi "${fileName}"
#
#  # Compile
#  gcc ${fileName} -o ${output} && ./${output}
#
#  # Show
#  cat ${fileName}
}

if [ -z "${1}" ] #  When the user doesn't pass any arguments, create a new file
then
  echo "Se eu não passar argumentos, o script cria um arquivo novo"
  editCompileShow ${newExerciseNumber}
else # When the user passes an argument it's time to test several options
  case "${1}" in
  ## The '-el' argument stands for 'Edit the Last file'
  -el)
    echo "Se eu passar '-el', o script edita o arquivo criado recentemente -> el=edit last"
    shift
    editCompileShow ${currentExercise}
    exit 0
  ;;
  ## The '-ep' argument stands for 'Edit a Pre-existing file'
  -ep)
    echo "Se eu passar '-ep', o script exige que o nome de um arquivo seja passado explicitamente. Se isso não acontecer, ele levanta um erro -> ep=edit pre-existing file"
    shift
    if [ -z "${1}" ]
    then
      echo
      echo -e "[ERROR] This option requires the name of a pre-existing file. \c"
      echo "Here are the files found in the current directory"
      echo
      ls *c | xargs -L 4
      echo
      exit 1
    fi
  ;;
  *)
    echo "Invalid option" 
    exit 2
  ;;
  esac
fi

