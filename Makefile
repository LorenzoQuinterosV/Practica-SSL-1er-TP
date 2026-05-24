CC = gcc
CFLAGS = -g -std=23 -pedantic-errors -Wall
PROGRAMAS = enlineas longitudes mayorlongitud todosiguales suma
OBJ = String.o

.PHONY = all test clean

all: $(PROGRAMAS)

test: programa
	./programa

programa: String.o StringTest.o
	$(CC) String.o StringTest.o -o $@

String.o: String.c String.h
	$(CC) $(CFLAGS) -c String.c -o $@

StringTest.o: StringTest.c String.h
	$(CC) $(CFLAGS) -c StringTest.c -o $@

enlineas: enlineas.c $(OBJ)
	$(CC) $(CFLAGS) enlineas.c $(OBJ) -o $@

longitudes: longitudes.c $(OBJ)
	$(CC) $(CFLAGS) longitudes.c $(OBJ) -o $@

mayorlongitud: mayorlongitud.c $(OBJ)
	$(CC) $(CFLAGS) mayorlongitud.c $(OBJ) -o $@

todosiguales: todosiguales.c $(OBJ)
	$(CC) $(CFLAGS) todosiguales.c $(OBJ) -o $@

suma: suma.c $(OBJ)
	$(CC) $(CFLAGS) suma.c $(OBJ) -o $@

clean:
	rm -f *.o programa $(PROGRAMAS)