#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  int sum = 0;
  for(int j = 0; j < m; j++) {
    int max = a[0][j];
    for(int i = 0; i < n; i++) {
      if(a[i][j] > max) max = a[i][j];
    }
    sum += max;
  }

  cout << sum;
  return 0;
}