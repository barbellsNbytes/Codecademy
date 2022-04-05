#include <iostream>

int main() {
  int year;

  std::cout << "Enter the year: ";
  std::cin >> year;

  if (year < 1000) {
    std::cout << "Enter a later date!\n";
  }
  else if (year % 4 != 0) {
    std::cout << "Not a leap year!\n";
  }
  else if ((year % 100 == 0) && (year % 400 != 0)) {
    std::cout << "Not a leap year!\n";
  }
  else {
    std::cout << "Leap year!\n";
  }
  
  
}