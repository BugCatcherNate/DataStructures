CC=g++


format: 
	astyle -xe linkedlist.cpp

clean: format
	rm -f linkedlist.cpp.orig
	rm -f bin/linkedlist

build: clean 
	$(CC) -g -Wall linkedlist.cpp -o bin/linkedlist
