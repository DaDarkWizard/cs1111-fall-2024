CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -Werror


main: main.o studentreader.o
	$(CC) $(ARGS) -o $@ $^

main.o: main.c studentreader.h

studentreader.o: studentreader.c studentreader.h

.PHONY: clean

clean:
	rm -rf main *.o
