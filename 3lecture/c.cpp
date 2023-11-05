// Lab 7 B

#include <iostream>
using namespace std;

string toBinary(int num) {
  if(num >= 1) {
    int remain = num % 2;
    char c = remain + '0';
    string binary = toBinary(num / 2);
    binary += c;
    return binary;
  }
  return "";
}

int main() {
  int n;
  cin >> n;
  cout << toBinary(n);
  return 0;
}