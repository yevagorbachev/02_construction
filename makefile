all: main.o student.o
	gcc -o program main.c student.c

main.o: main.c student.c student.h
	gcc -c main.c

student.o: student.c student.h
	gcc -c student.c

run:
	./program

clean:
	rm *.o