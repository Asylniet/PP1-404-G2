// Lab 7 H

#include <iostream>
using namespace std;

int fibonacci(int prev, int current, int count, int limit) {
  cout << count << endl;
  if(limit <= 1) return 0;
  if(count < limit) return fibonacci(current, current + prev, ++count, limit);
  return current;
}

int main() {
  int n;
  cin >> n;
  cout << fibonacci(0, 1, 2, n);
  return 0;
}