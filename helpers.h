#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//prints initial greeting to user
void printGreeting();
//prints out all restaurants entered
void printVec(std::vector<std::string> vec);
//finds restaurant at random index
std::string findStringAtIndex(std::vector<string> vec, int query);
//prints out restaurant user will go to
void printResults(string result);
