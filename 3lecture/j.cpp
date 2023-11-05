// Lab 7 H

#include <iostream>
using namespace std;

int sumHalf(int num) {
  if(num > 1) {
    int lastDigit = num % 10;
    return lastDigit / 2 + sumHalf(num / 10);
  }
  return 0;
}

int main() {
  int n;
  cin >> n;
  cout << sumHalf(n);
  return 0;
}