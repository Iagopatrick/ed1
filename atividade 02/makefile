CC = gcc

CFLAGS = -c -g -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

all : main

main: no.o lista.o listaord.o menu.o main.o
	$(CC) no.o lista.o listaord.o menu.o main.o -o main


main.o: main.c
	$(CC) $(CFLAGS) main.c

no.o: no.c no.h
	$(CC) $(CFLAGS) no.c

lista.o: no.o lista.c lista.h
	$(CC) $(CFLAGS) lista.c

listaord.o: lista.o listaord.c listaord.h
	$(CC) $(CFLAGS) listaord.c

menu.o: menu.h menu.c
	$(CC) $(CFLAGS) menu.c



clean:
	rm *.o main
