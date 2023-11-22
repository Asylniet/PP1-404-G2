#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
  map<char, int> letters;
  string s;
  getline(cin, s);
  for(int i = 0; i < s.size(); i++) {
    letters[s[i]]++;
  }

  char maxChar;
  map<char, int>::iterator it;
  for(it = letters.begin(); it != letters.end(); it++) {
    if(it == letters.begin()) maxChar = it->first;
    if(letters[maxChar] < it->second) {
      maxChar = it->first;
    }
  }
  
  cout << maxChar;
  return 0;
}