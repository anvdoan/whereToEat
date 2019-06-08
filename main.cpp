#include "helpers.h"
void printGreeting(){
  std::cout << "Welcome to whereToEat: the tool for indecisive nerds to figure out where to get food!"
  << std::endl;

  std::cout << "Please type in your restaurants.\n Type \"done\" when you are finished." << std::endl;
}

void printVec(std::vector<std::string> vec){
  cout << endl;
  std::cout << "You have entered in these restaurants:" << std::endl;

  for(unsigned i = 0; i < vec.size(); ++i){
    std::cout << vec.at(i) << std::endl;
  }
}

std::string findStringAtIndex(std::vector<std::string> vec, int query){
  std::string found;
  for(unsigned i = 0; i < vec.size(); ++i){
    if(i == (unsigned)query){
      found = vec.at(i);
    }
  }
  return found;
}
void printResults(string result){
  cout << endl;
  std::cout << "You're going to go to: " << result << std::endl;
  std::cout << "Have a nice meal!" << std::endl;
}


int main(){
  srand(time(NULL));
  printGreeting();

  std::string input;
  std::vector<std::string> candidates;
  int numOptions = 0;

  getline(cin, input);

  while(input != "done"){
    candidates.push_back(input);
    ++numOptions;
    getline(cin, input);
  }

  printVec(candidates);

  int index = rand() % numOptions;

  std::string winner = findStringAtIndex(candidates, index);

  printResults(winner);

  return 0;
}
