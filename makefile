default: wochenstatus

wochenstatus.o: wochenstatus.c
	gcc -c wochenstatus.c -o wochenstatus.o

wochenstatus: wochenstatus.o
	gcc wochenstatus.o -o wochenstatus

clean:
	-rm -f wochenstatus.o
	-rm -f wochenstatus
