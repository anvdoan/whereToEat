# Makefile for whereToEat

CXX = g++
CXXFLAGS = -Wall -Werror -pedantic --std=c++11 -g

main.exe: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
