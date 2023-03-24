CC=gcc

CFLAGS=-c -g -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

#CFLAGS=-c -o0 -std=c11

all : main 

main : lista.o funcionario.o main.o
	$(CC) lista.o funcionario.o main.o -o main

main.o : main.c
	$(CC) $(CFLAGS) main.c

funcionario.o : funcionario.c funcionario.h
	$(CC) $(CFLAGS) funcionario.c

lista.o : funcionario.o lista.c lista.h
	$(CC) $(CFLAGS) lista.c


clean : 
	rm *.o main	
