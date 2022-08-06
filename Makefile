CC=gcc



format: 
	astyle linkedlist.c

clean: format
	rm -f bin/linkedlist

build: clean 
	$(CC) linkedlist.c -o bin/linkedlist
