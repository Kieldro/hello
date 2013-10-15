CC = g++
SOURCE = hello.cc
FLAGS = -std=c++0x -w	# suppresses warnings

all: $(SOURCE)
	@#@clear		# '@' suppresses command echoing
	$(CC) $(FLAGS) $(SOURCE)
	./a.out arg1

$(SOURCE): 
	echo I RAN

run: 
	@echo HALLO

clean: ; rm a.out

# these are simply rule names, not file or directories
.PHONY: all clean
