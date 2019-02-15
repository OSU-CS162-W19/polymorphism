CC=g++

all: main

main: main.cpp universityperson.o employee.o instructor.o universityperson.hpp employee.hpp instructor.hpp
	$(CC) main.cpp universityperson.o employee.o instructor.o -o main

universityperson.o: universityperson.cpp universityperson.hpp
	$(CC) -c universityperson.cpp -o universityperson.o

employee.o: employee.cpp employee.hpp
	$(CC) -c employee.cpp -o employee.o

instructor.o: instructor.cpp instructor.hpp
	$(CC) -c instructor.cpp -o instructor.o

clean:
	rm -f *.o main
