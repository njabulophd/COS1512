CFLAGS=-std=c++11

all: q1 q2
	$(CFLAGS) $(CXX) q1.o -o q1.elf

q1: q1.cpp
	$(CFLAGS) $(CXX) -c q1.cpp -o q1.o
q2: q2.cpp
	$(CFLAGS) $(CXX) -c q2.cpp -o q2.o

clean:
	rm -f *.o -f *.elf

runq1:
	./q1.elf
runq2:
	./q2.elf
