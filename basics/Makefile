CXX=g++
CPPFLAGS=-std=c++1y
LDFLAGS=-g

SRCS=max.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: max max2 max3 stack1test stack3test

max: max.o
	$(CXX) $(LDFLAGS) -o max.out max.o $(LDLIBS)

max.o: max.cpp max.hpp

max2: max2.o
	$(CXX) $(LDFLAGS) -o max2.out max2.o $(LDLIBS)

max2.o: max2.cpp

max3: max3.cpp
	$(CXX) $(LDFLAGS) -o max3.out max3.cpp

stack1test: stack1test.cpp stack1.hpp
	$(CXX) $(LDFLAGS) -o stack1test.out stack1test.cpp

stack3test: stack3test.cpp stack1.hpp stack3.hpp
	$(CXX) $(LDFLAGS) -o stack3test.out stack3test.cpp

clean:
		rm -f $(OBJS) && rm -rf *.out
