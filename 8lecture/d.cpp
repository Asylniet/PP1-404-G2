// 1 2 3 4 5 6 7 8 11 12 13 17 19 - number
//   1 2   3   4   5     6  7  8  - primeIndex
//     1   2       3        4     - superPrimeIndex
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if(n == 1 || n == 0) return false;
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) return false;
  }
  return true;
}

int main() {
  int target;
  cin >> target;
  int number = 1, primeIndex = 0, superPrimeIndex = 0;
  while(superPrimeIndex < target) {
    number++;
    if(isPrime(number)) {
      primeIndex++;

      if(isPrime(primeIndex)) superPrimeIndex++;
    }
  }

  cout << number;
  return 0;
}

