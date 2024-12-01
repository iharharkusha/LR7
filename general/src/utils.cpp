#include <string>
#include <algorithm> 

using std::string;

string IntToBinary(const string& s) {
  bool isNegative = s[0] == '-';
  string abs_s = isNegative ? s.substr(1) : s;

  string b = "";
  string curr = abs_s;
  
  while (curr != "0") {
    int remainder = 0; 
    string next = "";
    bool leadingZero = true;

    for (char digit : curr) {
      int currentDigit = remainder * 10 + (digit - '0');
      int quotient = currentDigit / 2;
      remainder = currentDigit % 2;
      
      if (quotient > 0 || !leadingZero) {
        next += (quotient + '0');
        leadingZero = false;
      }
    }

    curr = next.empty() ? "0" : next;
    b += (remainder + '0');
  }

  std::reverse(b.begin(), b.end());
  
  if (b.empty()) b = "0";

  b = (isNegative ? "1" : "0") + b;

  return b;
}