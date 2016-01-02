#!/bin/bash
#-------------------------------------------------------------------------------
# mkproject - A tool te help create a Epitech project
#  by Arignir (benjamin.grange@epitech.eu)
#-------------------------------------------------------------------------------

# Dir that contains all your project
PROJECT_DIR_PATH=~/rendu/
TEMPLATE=template/

echo "Hello ${USER}, please enter project name..."
read project_name
#read -s -p "and your UNIX password..." unix_pwd
#echo
echo "Creating project name $project_name ..."

project_maj_name=`echo "$project_name" | tr '[:lower:]' '[:upper:]'`

mkdir -p $PROJECT_DIR_PATH/$project_name

# Move the template to the new dir
cp -n -r $TEMPLATE/* $PROJECT_DIR_PATH/$project_name

# Replace all PROJECT_NAME in the template by the name of the project, and all PROJECT_MAJ_NAME by the name in lowercase (Ideal for macro in .h file)
mv $PROJECT_DIR_PATH/$project_name/src/PROJECT_NAME.c $PROJECT_DIR_PATH/$project_name/src/$project_name.c
sed -i "s/PROJECT_NAME/$project_name/g" $PROJECT_DIR_PATH/$project_name/src/*.c
sed -i "s/PROJECT_NAME/$project_name/g" $PROJECT_DIR_PATH/$project_name/include/*.h
sed -i "s/PROJECT_MAJ_NAME/$project_maj_name/g" $PROJECT_DIR_PATH/$project_name/include/*.h
sed -i "s/PROJECT_NAME/$project_name/g" $PROJECT_DIR_PATH/$project_name/Makefile
