CC=gcc

CFLAGS=-c -g -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

#CFLAGS=-c -o0 -std=c11

all : main 

main : filaP.o no.o main.o
	$(CC) filaP.o no.o main.o -o main

main.o : main.c
	$(CC) $(CFLAGS) main.c

no.o : no.c no.h
	$(CC) $(CFLAGS) no.c

filaP.o : no.o filaP.h filaP.c
	$(CC) $(CFLAGS) filaP.c

clean : 
	rm *.o main	
