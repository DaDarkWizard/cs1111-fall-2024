CC=gcc
ARGS=-Wall -O3

prog: main

testlinkedlist.o: testlinkedlist.c linkedlist.h
	$(CC) -c testlinkedlist.c

addlinkedlist.o: addlinkedlist.c linkedlist.h
	$(CC) -c addlinkedlist.c

indexoflinkedlist.o: indexoflinkedlist.c linkedlist.h
	$(CC) -c indexoflinkedlist.c 

deletelinkedlist.o: deletelinkedlist.c linkedlist.h
	$(CC) -c deletelinkedlist.c 

getlinkedlist.o: getlinkedlist.c linkedlist.h
	$(CC) -c getlinkedlist.c 

insertlinkedlist.o: insertlinkedlist.c linkedlist.h
	$(CC) -c insertlinkedlist.c 

printlinkedlist.o: printlinkedlist.c linkedlist.h
	$(CC) -c printlinkedlist.c 

main: testlinkedlist.o addlinkedlist.o indexoflinkedlist.o deletelinkedlist.o getlinkedlist.o insertlinkedlist.o printlinkedlist.o
	$(CC) $(ARGS) -o $@ $^

.PHONY: clean

clean:
	rm -rf *.o main


