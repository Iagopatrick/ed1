CC=gcc

CFLAGS=-O0 -c -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 
all: exercicio2 exercicio3

exercicio2: exercicio2.o lista.o
	$(CC) exercicio2.o lista.o -o exercicio2


exercicio3: exercicio3.o lista.o
	$(CC) exercicio3.o lista.o -o exercicio3

exercicio2.o: exercicio2.c
	$(CC) $(CFLAGS) exercicio2.c

exercicio3.o: exercicio3.c
	$(CC) $(CFLAGS) exercicio3.c

lista.o: lista.c lista.h
	$(CC) $(CFLAGS) lista.c

clena: 
	rm *.o exercicio2 exercicio3
