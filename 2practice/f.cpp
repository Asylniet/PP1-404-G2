#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  bool isPerfect = true;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i != j && a[i][j] != a[j][i]) {
        isPerfect = false;
        break;
      }
    }
  }
  
  isPerfect ? cout << "Perfect" : cout << "Not perfect";
  return 0;
}