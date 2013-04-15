#!bin/sh

#source=$*
source=scratch.cpp
#len=${#source}
object=scratch.o

clear
echo COMPILTING $source
# compile in c++11
g++ --std=c++0x -Wall -pedantic $source -o $object

if [ $? -eq 0 ];then		# no compilation errors
	echo RUNNING $source
	./$object
fi
