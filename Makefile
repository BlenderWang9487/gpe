MY_CXX=g++-12

# all .cpp file in solutions folder
all: $(patsubst solutions/%.cpp, bin/%, $(wildcard solutions/*.cpp))


# Path: solutions/%.cpp
# compile the solution
bin/%: solutions/%.cpp
	$(MY_CXX) -O3 -std=c++20 $< -o $@
