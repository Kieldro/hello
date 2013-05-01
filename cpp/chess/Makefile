SHELL = /bin/sh

CC = g++#-4.7
CPPFLAGS = -std=c++0x -I /public/linux/include/boost-1_44 \
	-L/public/linux/include/ -l #-pedantic -Wall

RUN = chess.cc

all: run clean

run: 
	clear
	$(CC) $(CPPFLAGS) $(RUN) -o chess.app
	./chess.app < inChess.in

test: $(TEST)
	clear
	$(CC) $(CPPFLAGS) $(TEST) -lcppunit -o $(TEST).app
	valgrind \
	./$(TEST).app 2>&1 | tee $(TESTOUT)

clean:
	rm *.app

scratch: scratch.c++
	clear
	$(CC) $(CPPFLAGS) scratch.c++ -o scratch.c++.app
	#valgrind \
	./scratch.c++.app