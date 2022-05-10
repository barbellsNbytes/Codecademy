#include <iostream>
#include <vector>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns){
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

std::string Profile::view_profile() {
  std::string bio = name;
  bio += " (";
  bio += pronouns;
  bio += ") - ";
  bio += std::to_string(age);
  bio += "\n\n";
  bio += city;
  bio += ", ";
  bio += country + "\n\n";
  
  bio += "Hobbies: \n";

  for (int i = 0; i < hobbies.size(); i++){
    bio += hobbies[i];
    bio += "\n\n";
  }
  return bio;
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}