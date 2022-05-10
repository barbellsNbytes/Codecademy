#include <iostream>

int main() {
  double weight_e, rel_grav, weight_p;
  int planet;
  std::string planet_name;

  std::cout << "Enter Earth weight: ";
  std::cin >> weight_e;
  std::cout << "Enter planet to fight on (1 - 8): ";
  std::cin >> planet;

  switch (planet) {
    case 1 :
     rel_grav = 0.38;
     planet_name = "Mercury";
     break;
    case 2 :
      rel_grav = 0.91;
      planet_name = "Venus";
      break;
    case 3 :
      rel_grav = 1;
      planet_name = "Earth";
      break;
    case 4 :
      rel_grav = 0.38;
      planet_name = "Mars";
      break;
    case 5 :
      rel_grav = 2.34;
      planet_name = "Jupiter";
      break;
    case 6 :
      rel_grav = 1.06;
      planet_name = "Saturn";
      break;
    case 7 :
      rel_grav = 0.92;
      planet_name = "Uranus";
      break;
    case 8 :
      rel_grav = 1.19;
      planet_name = "Neptune";
      break;
  }

  weight_p = weight_e * rel_grav;
  std::cout << "The weight on " << planet_name << " is " << weight_p << " lbs. \n";
    
}