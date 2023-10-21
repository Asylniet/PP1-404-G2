// Spiral
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];
  int top = 0, bottom = n - 1, left = 0, right = n - 1, counter = 1;
  while(counter <= n * n) {
    for(int i = left; i <= right; i++) {
      a[top][i] = counter++;
    }
    ++top;

    for(int i = top; i <= bottom; i++) {
      a[i][right] = counter++;
    }
    --right;
    
    for(int i = right; i >= left; i--) {
      a[bottom][i] = counter++;
    }
    --bottom;
    
    for(int i = bottom; i >= top; i--) {
      a[i][left] = counter++;
    }
    ++left;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}