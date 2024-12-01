#include <iostream>
#include <string>

using std::string;

string ForwardToReverse(const string& s, unsigned int size) {
  if (s[0] == '1') {
    string res = s;

    char b[2] = {'0', '1'};

    for (unsigned int i = 1; i < size; ++i) {
      if (s[i] == '0') res[i] = b[1];
      else res[i] = b[0];
    }

    return res;
  } 
  else return s;
}