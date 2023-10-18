#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) { // Traverse through array
    bool isPrime = true;
    for(int j = 2; j <= sqrt(a[i]); j++) { // Check every number from 2 to sqrt(a[i])
      if(a[i] % j == 0 || a[i] < 2) {
        isPrime = false;
        break;
      }
    }
    if(isPrime) cout << a[i] << " ";
  }

  return 0;
}