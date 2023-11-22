// Comparator
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparePoints(int a, int b) {
  return a > b;
}

// for(int i = begin; i < end; i++) {
//  if(!comparePoints(v[i], v[i + 1])) {
//      swap(v[i], v[i + 1]);
//  }
// }

int main() {
  int n;
  cin >> n;
  vector<int> points;

  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    points.push_back(x);
  }

  sort(points.begin(), points.end(), comparePoints);
  for(int i = 0; i < points.size(); i++) {
    cout << points[i] << " ";
  }
  return 0;
}