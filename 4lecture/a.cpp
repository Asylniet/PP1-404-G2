#include <iostream>
using namespace std;


// Reversed: 4 3 2 1
void print(int n) {
  cout << n << " ";
  if(n > 1) print(n - 1);
}

// Original: 1 2 3 4
// int print(int n) {
//   if(n >= 1) cout << print(n - 1) << " ";
//   return n + 1;
// }

int main() {
  int n;
  cin >> n;
  print(n);
  return 0;
}