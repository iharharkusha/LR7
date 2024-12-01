#pragma once
#include <string>

#include "./constants.h"

using std::string;

string IntToBinary(const string& s);

inline int readIntegerInLine() {
    int inputValue;
    if (!(std::cin >> inputValue) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n') {
        }
        return -INF;
    }
    return inputValue;
};

inline string readIntStringInLine() {
    string inputValue;
  std::cin >> inputValue;
  if (inputValue[0] == '-' || isdigit(inputValue[0])) {
    unsigned int size = inputValue.size();
    for (unsigned int i = 1; i < size; ++i) {
      if (!isdigit(inputValue[i])) {
        return INFSTRING;
      }
    }
  }  
  else return INFSTRING; 
  return inputValue;
};