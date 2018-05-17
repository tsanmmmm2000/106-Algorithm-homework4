dd.o: dd.c
	gcc -c dd.c
dd: dd.o
	gcc dd.o -o dd
