CC = g++
CFLAGS = -std=c++11 -Wall
CXXFLAGS = -std=c++98 -Wall

all: count runtest

count: wc.cc
	$(CC) $(CXXFLAGS) wc.cc

wctest.o: wctest.cc
	$(CC) -c $(CFLAGS) wctest.cc

doc:
	doxygen -g doxyfile
	doxygen doxyfile
	
check:
	cppcheck *.cc
	valgrind ./count
	
clean:
	-rm *.o wctest
	-rm -r latex
	-rm -r html
	-rm doxyfile
	


runtest: wctest
	./wctest
	
wctest: wctest.o 
	$(CXX) -o $@ $^
