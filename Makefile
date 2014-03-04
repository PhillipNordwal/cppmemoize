CC=gcc
CPP=g++
CPPFLAGS=-Wall -O3

all:testmemoize.out
testmemoize.out:testmemoize.cpp
	${CPP} ${CPPFLAGS} -o $@ $(@:.out=.cpp)
	./$@

clean:
	rm *.out *~
