CC=gcc

CFLAGS=-c -g -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

#CFLAGS=-c -o0 -std=c11

all : main 

main :  pilha.o no.o main.o
	$(CC) pilha.o no.o main.o -o main

main.o : main.c
	$(CC) $(CFLAGS) main.c

no.o : no.c no.h
	$(CC) $(CFLAGS) no.c

lista.o : no.o lista.c lista.h
	$(CC) $(CFLAGS) lista.c

listaord.o : no.o lista.o listaord.c listaord.h
	$(CC) $(CFLAGS) listaord.c

pilha.o : no.o pilha.h pilha.c
	$(CC) $(CFLAGS) pilha.c

clean : 
	rm *.o main	
