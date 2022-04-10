#include <iostream>
#include <string>

void replace(std::string &to_replace, int start_pos, int leng){
  for (int i = 0; i < leng; i++){
    to_replace[start_pos+i] = '*';
  }
}

void bleep(std::string search, std::string &text_to_search){
  for (int i = 0; i < text_to_search.size(); i++){
    int match_length = 0;

    for (int j = 0; j < search.size(); j++){
        if (text_to_search[i+j] == search[j]){
        match_length++;
      }
    }
    if (match_length == search.size()){
      replace(text_to_search,i,search.size());
    }
  }
}

