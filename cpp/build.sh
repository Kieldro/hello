source=$*
#len=${#source}
object=$source.o

clear
echo COMPILTING $source
g++ --std=c++0x $source -o $object

if [ $? -eq 0 ];then		# no compilation errors
	echo RUNNING $source
	./$object
fi
