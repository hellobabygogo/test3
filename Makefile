all: 
	gcc -c menu.c -o menu.o
	gcc -c test.c -o test.o
	gcc menu.o test.o -o test

clean:
	rm -rf *.o test
