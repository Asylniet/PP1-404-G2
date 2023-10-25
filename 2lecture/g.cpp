#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool isEqual = true;
  for(int i = 0; i < n - 1; i++) {
    if(a[i] != a[i + 1]) {
      isEqual = false;
      break;
    }
  }

  if(isEqual) cout << "Yes";
  else cout << "No";
  return 0;
}