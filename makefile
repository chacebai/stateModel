src = $(wildcard ./src/*.cpp)
obj = $(patsubst ./src/%.cpp, ./obj/%.o, $(src))

inc_path = ./inc/

CXXFLAGS = -g -W -Wall -Wextra -Werror -std=c++11

ALL:main.out

ifeq ($(OS),Windows_NT)
    ALL = main.exe
else
    ALL = main.out
endif

main.out:$(obj)
	g++ main.cpp $^ -o $@ $(CXXFLAGS) -I $(inc_path)

$(obj):./obj/%.o:./src/%.cpp
	g++ -c $< -o $@ $(CXXFLAGS) -I $(inc_path)

.PHONY: clean all
clean:
	-rm -rf ./obj/*.o *.out

