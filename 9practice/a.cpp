#include <iostream>
using namespace std;

int main() {
  // [97, 122]
  string word, secret;
  cin >> word >> secret;
  int secretSize = secret.size();
  for (int i = 0; i < word.size() - secretSize; i++) {
    secret += secret[i];
  }
  
  for (int i = 0; i < word.size(); i++) {
    int shiftIndex = word[i] - 'a';
    bool test = secret[i] + shiftIndex > 'z';
    char c = test ? secret[i] + shiftIndex - 26 : secret[i] + shiftIndex;
    cout << c;
  }
  
  return 0;
}