#include <iostream>
#include <stdlib.h>

int main () {
  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user =0;
  

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
 /* 
 1 = Rock
 2 = Paper
 3 = Scissors
 */

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "shoot! \n";
  std::cin >> user;

  switch (computer) {

    case 1 :
      if (user == 1){
        std::cout << "Rock-Rock! Tie!\n";
      }
      else if (user == 2) {
        std::cout << "Paper covers rock! You Win!\n";
      }
      else if (user == 3) {
        std::cout << "Rock crushes scissors! You Lose!\n";
      }
      else {
        std::cout << "Bad input\n";
      }
      break;
    
    case 2 :
      if (user == 1){
        std::cout << "Paper covers rock! You Lose!\n";
      }
      else if (user == 2) {
        std::cout << "Paper-Paper! Tie!\n";
      }
      else if (user == 3) {
        std::cout << "Scissors cut paper! You Win!\n";
      }
      else {
        std::cout << "Bad input\n";
      }
      break;

    case 3 :
      if (user == 1){
        std::cout << "Rock crushes scissors! You Win!\n";
      }
      else if (user == 2) {
        std::cout << "Scissors cuts paper! You Lose!\n";
      }
      else if (user == 3) {
        std::cout << "Scissors-Scissors! Tie!\n";
      }
      else {
        std::cout << "Bad input\n";
      }
      break;
  }
}