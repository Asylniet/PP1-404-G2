#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  string word = "";
  bool containsDigit = false;
  for(int i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) containsDigit = true;

    if(s[i] == ' ') {
      if(!containsDigit) cout << word << endl;
      word = "";
      containsDigit = false;
    } else {
      word += s[i];
    }

    if(i == s.size() - 1 && !containsDigit) cout << word;
  }
  return 0;
}