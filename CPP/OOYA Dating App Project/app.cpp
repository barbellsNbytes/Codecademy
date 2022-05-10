#include <iostream>
#include <vector>
#include "profile.hpp"

int main() {

  Profile sam ("Sam Drakkila", 30, "New York", "USA", "He/Him");
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("redading advice columns");
  std::cout << sam.view_profile();

}