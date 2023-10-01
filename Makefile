#make file

#compiler

CXX = g++

#compiler flags

CXXFLAGS = -std=c++11 -Wall -Wextra

#executable name

TARGET = test_runner

#Source files

SRCS = main.cpp Invoice.cpp 

#Build and run tests

.PHONY: all

all:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
	./$(TARGET)

#clear rules

.PHONY: clean

clean:
	rm -f $(TARGET)