all: connections
connections : main.o my_mat.o
	gcc -Wall -g -o connections main.o my_mat.o
main.o:
	gcc -Wall -g -c main.c 
my_mat.o:
	gcc -Wall -g -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o connections