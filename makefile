all: zadanie_6.o first_or_second.o
	wgcc zadanie_6.o first_or_second.o && del *.o

zadanie_6.o: zadanie_6.c
	wgcc -c zadanie_6.c

first_or_second.o: first_or_second.c
	wgcc -c first_or_second.c


