#include <iostream>
using namespace std;

int main() {
  // char number = '5';
  // cout << (int)number - '0'; // Typecasting

  string s;
  cin >> s;
  int firstNumber = s[0] - '0';
  int sum = 0;
  for(int i = 1; i < s.size(); i++) {
    int number = s[i] - '0';
    sum += number;
  }

  // if(sum % 10 == firstNumber) cout << "Yes";
  // else cout << "No";
  sum % 10 == firstNumber ? cout << "Yes" : cout << "No";
  return 0;
}