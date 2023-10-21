// Pyramids

#include <iostream>
using namespace std;

int main() {
  int n, width, center;
  cin >> n;
  width = 2 * n - 1;
  center = width / 2;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < width; j++) {
      if(j >= center - i && j <= center + i) cout << "*";
      else cout << " ";
    }
    cout << endl;
  }
  return 0;
}