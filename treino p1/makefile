CC=gcc

CFLAGS=-O0 -c -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

all: main

main: no.o listaord.o main.o
	$(CC) no.o listaord.o main.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c

no.o: no.c no.h
	$(CC) $(CFLAGS) no.c



listaord.o: listaord.c listaord.h no.o
	$(CC) $(CFLAGS) listaord.c

clean:
	rm *.o main
