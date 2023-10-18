#include <iostream>

using namespace std;

int main() {
  int n, target;
  cin >> n >> target;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(target == a[i]) {
      cout << i + 1; // True: i
      break;
    } else if(target < a[i]) {
      cout << i;
      break; // True: i - 1
    } else if(i == n - 1) {
      cout << i + 1;
    }
  }
  return 0;
}