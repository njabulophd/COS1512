CFLAGS=-std=c++11

all: main
	$(CFLAGS) $(CXX) q1.o -o q1.elf

main: q1.cpp
	$(CFLAGS) $(CXX) -c q1.cpp -o q1.o

clean:
	rm -f *.o -f *.elf

run:
	./q1.elf