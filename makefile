CXX = clang++
CC = clang
all:	pirma

test: 	all
	  	./pirma

clean:
		rm -f *.o pirma