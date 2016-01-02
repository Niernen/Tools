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
mkdir -p $PROJECT_DIR_PATH/$project_name
cp -n -r $TEMPLATE/* $PROJECT_DIR_PATH/$project_name
mv $PROJECT_DIR_PATH/$project_name/src/PROJECT_NAME.c $PROJECT_DIR_PATH/$project_name/src/$project_name.c
sed -i "s/PROJECT_NAME/$project_name/g" $PROJECT_DIR_PATH/$project_name/src/*.c
sed -i "s/PROJECT_NAME/$project_name/g" $PROJECT_DIR_PATH/$project_name/Makefile
