#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> m;
  int b[m];
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  for(int i = 0; i < m; i++) {
    int target = b[i];
    bool isSum = false;
    for(int j = 0; j < n; j++) {
      for(int k = j + 1; k < n; k++) {
        if(a[j] + a[k] == target) {
          isSum = true;
          break;
        }
      }
    }

    isSum ? cout << "Yes\n" : cout << "No\n";
  }
  return 0;
}