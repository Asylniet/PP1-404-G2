#include <iostream>
using namespace std;

int main() {
  int n, leftSum = 0, leftCount = 0, rightSum = 0, rightCount = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(a % 2 == 0) {
      leftSum += a;
      leftCount++;
    } else {
      rightSum += a;
      rightCount++;
    }
  }

  cout << "Left hand magic power: " << leftCount * leftSum << endl;
  cout << "Right hand magic power: " << rightCount * rightSum;
  return 0;
}