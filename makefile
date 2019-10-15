all: main.o student.o myrand.o
	gcc -o program main.c student.c myrand.c

main.o: main.c student.c student.h myrand.c myrand.h
	gcc -c main.c

student.o: student.c student.h myrand.c myrand.h
	gcc -c student.c

myrand.o: myrand.c myrand.h
	gcc -c myrand.c
	
run:
	./program

clean:
	rm *.o