CFLAGS=-std=c++11

all: q1 q2 q3 q4 q5

q1: q1.cpp
	$(CFLAGS) $(CXX) -c q1.cpp -o q1.o
	$(CFLAGS) $(CXX) q1.o -o q1.elf
q2: q2.cpp
	$(CFLAGS) $(CXX) -c q2.cpp -o q2.o
	$(CFLAGS) $(CXX) q2.o -o q2.elf
q3: q3.cpp
	$(CFLAGS) $(CXX) -c q3.cpp -o q3.o
	$(CFLAGS) $(CXX) q3.o -o q3.elf
q4: q4.cpp
	$(CFLAGS) $(CXX) -c q4.cpp -o q4.o
	$(CFLAGS) $(CXX) q4.o -o q4.elf
q5: q5.cpp
	$(CFLAGS) $(CXX) -c q5.cpp -o q5.o
	$(CFLAGS) $(CXX) q5.o -o q5.elf

clean:
	rm -f *.o -f *.elf

runq1:
	./q1.elf
runq2:
	./q2.elf
