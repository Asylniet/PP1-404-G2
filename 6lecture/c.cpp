// LAB 9 A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparePoints(pair<int, int> &a, pair<int, int> &b) {
  if(a.first == b.first) {
    return a.second < b.second;
  }
  return a.first < b.first;
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int> > points;
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    points.emplace_back(x, y);
  }

  sort(points.begin(), points.end(), comparePoints);

  for(int i = 0; i < points.size(); i++) {
    cout << points[i].first << " " << points[i].second << endl;
  }
  return 0;
}