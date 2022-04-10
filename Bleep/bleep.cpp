#include <iostream>
#include <string>
#include "functions.hpp"

int main(){

  std::string word = "broccoli";
  std::string text = "I'm rolling up my broccoli";

  bleep(word,text);
  std::cout << text;
}