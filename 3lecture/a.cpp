// Explnation

#include <iostream>
using namespace std;

int factorial(int current) {
  if(current > 1) return current * factorial(current - 1);
  return 1;
}

int main() {
  int n;
  cin >> n;
  cout << factorial(n);
  return 0;
}