CC=gcc


format: 
	astyle -xe linkedlist.c

clean: format
	rm -f linkedlist.c.orig
	rm -f bin/linkedlist

build: clean 
	$(CC) -g -Wall linkedlist.c -o bin/linkedlist
