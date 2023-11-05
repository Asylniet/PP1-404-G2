// Lab 7 a

#include <iostream>
using namespace std;

int degree(int current) {
  if(current >= 1) return 2 * degree(current - 1);
  return 1;
}

int main() {
  int n;
  cin >> n;
  cout << degree(n);
  return 0;
}