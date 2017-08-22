CXX=g++
CPPFLAGS=-std=c++1y
LDFLAGS=-g

SRCS=max.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: max max2 max3

max: max.o
	$(CXX) $(LDFLAGS) -o max.out max.o $(LDLIBS)

max.o: max.cpp max.hpp

max2: max2.o
	$(CXX) $(LDFLAGS) -o max2.out max2.o $(LDLIBS)

max2.o: max2.cpp

max3: max3.cpp
	$(CXX) $(LDFLAGS) -o max3.out max3.cpp
clean:
		rm -f $(OBJS) && rm -rf *.out
