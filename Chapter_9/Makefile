CXX=g++
CXXFLAGS = -Wall -std=c++11

all: 1 2 3 4 
1: 1.cpp golf.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
2: 2.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
3: 3.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
4: 4.cpp sales.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
clean:
	rm -f *.exe