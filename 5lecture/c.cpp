#include <iostream>
using namespace std;

int gcd(int a, int b) {
  int maxGcd = 1;
  for(int i = 2; i <= min(a, b); i++) {
    if(a % i == 0 && b % i == 0) {
      if(i > maxGcd) maxGcd = i;
    }
  }
  return maxGcd;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int maxGcd = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i != j) {
        int res = gcd(a[i], a[j]);
        if(res > maxGcd) maxGcd = res;
      } 
    }
  }
  cout << maxGcd;
  return 0;
}
