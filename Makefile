CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	rm test

test: test.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp -o test
