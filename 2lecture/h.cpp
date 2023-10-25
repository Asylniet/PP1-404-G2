#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int counter = 0;
  for(int i = 0; i < s.size() - 2; i++) {
    if(s[i] == 'r' && s[i + 1] == 'g' && s[i + 2] == 'b') counter++;
  }
  cout << counter;
  return 0;
}