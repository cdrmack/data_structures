all:
	c++ -g -std=c++2a -Wall -Werror -Wpedantic main.cpp

clean:
	rm a.out
