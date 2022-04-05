#include <iostream>

int main() {

  //Brain explodes here:
  //level one
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      std::cout << "Fizz";
    }
    if (i % 5 == 0) {
      std::cout << "Buzz";
    }
    if ((i % 3 != 0) && (i % 5 != 0)) {
      std::cout << i;
    }
    
    std::cout << "\n";
  }

  //level two
  for (int i = 1; i <= 100; i++) {
    if (i % 15 == 0) {
      std::cout << "FizzBuzz\n";
    }
    else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    }
    else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    }
    else {
      std::cout << i << "\n";
    }
  }
}