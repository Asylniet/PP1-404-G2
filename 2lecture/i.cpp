#include <iostream>
using namespace std;

int main() {
  int n, counter = 0;
  cin >> n;
  while(n > 0) {
    if(n % 2 == 1) break;
    n /= 2;
    counter++;
  }
  cout << counter;
  return 0;
}