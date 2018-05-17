dd.o: dd.c
	gcc -c dd.c
dd: as.o
	gcc dd.o -o dd
