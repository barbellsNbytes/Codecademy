#include <iostream>
#include <vector>
#include <string>

int main() {

  //Whale, whale, whale.
  //What have we got here?

  std::string phrase = "turpentine and turtles";
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> results;

  for (int i =0; i < phrase.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (phrase[i] == vowels[j]) {
        results.push_back(vowels[j]);
      }
    }
    if (phrase[i] == 'e') {
      results.push_back('e');
    }
    else if (phrase[i] == 'u') {
      results.push_back('u');
    }
  }
  for (int i = 0; i < results.size();i++) {
    std::cout << results[i];
  }
}