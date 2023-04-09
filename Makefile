FLAGS = -pedantic-errors -std=c++11 

oper.o: oper.cpp oper.h
	g++ $(FLAGS) -c $<

main.o: main.cpp oper.h
	g++ $(FLAGS) -c $<

main: oper.o main.o
	g++ oper.o main.o -o main

clean:
	rm -f main main.o oper.o main.tgz

tar: 
	tar -czvf main.tgz *.cpp *.h

.PHONY: clean tar
