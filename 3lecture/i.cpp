// I

#include <iostream>
using namespace std;

int sumInput() {
  int n;
  cin >> n;
  if(n != 0) return n + sumInput();
  return 0;
}

int main() {
  cout << sumInput();
  return 0;
}