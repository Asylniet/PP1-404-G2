#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(string s) {
  if(s == "") return 0;
  int lastIndex = s.size() - 1;
  int lastDigit = s[lastIndex] - '0';
  return lastDigit + sumOfDigits(s.substr(0, lastIndex));
}

int main() {
  string s;
  cin >> s;
  cout << sumOfDigits(s);
  return 0;
}