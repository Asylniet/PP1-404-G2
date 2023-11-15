#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrom(string s) {
  string original = s;
  reverse(s.begin(), s.end());

  return original == s;
}

int main() {
  string s;
  cin >> s;
  string temp = "";
  temp += s[0];
  int maxPalindrom = 0;
  for(int i = 1; i < s.size(); i++) {
    temp += s[i];
    if(!isPalindrom(temp)) {
      if(i + 1 > maxPalindrom) maxPalindrom = i + 1;
    }
  }

  cout << maxPalindrom;
  return 0;
}