#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int widthOfOne = 2 * n - 1;
  int width = 2 * widthOfOne + 1;
  int middle = width / 2;
  int rCounter = n;
  for (int i = 0; i < 2 * n; i++){
    for (int j = 0; j < width; j++){
      int leftSide = middle - i;
      int rightSide = middle + i;
      if(
        j == leftSide || 
        j == rightSide ||
        (i == 2 * n - 1 && j != middle) ||
        (i == n - 1 && j >= leftSide && j <= rightSide) ||
        (i >= n && (j == middle - rCounter || j == middle + rCounter))
      ) {
        cout << "*";
      }
      else cout << " ";
    }
    if(i >= n) rCounter--;
    cout << endl;
  }
  
  return 0;
}