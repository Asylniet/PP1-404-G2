#include <iostream>
#include <vector>
using namespace std;

void markPosition(vector<vector<int> > &v, int i, int j) {
  // i - y
  // j - x
  if(i < 0 || i >= v.size() || j < 0 || j >= v[i].size() || v[i][j] == 0) {
    return;
  }

  v[i][j] = 0;

  markPosition(v, i - 1, j); // top
  markPosition(v, i + 1, j); // bottom
  markPosition(v, i, j - 1); // left
  markPosition(v, i, j + 1); // right
}

int countIslands(vector<vector<int> > &v) {
  int counter = 0;
  for(int i = 0; i < v.size(); i++) {
    for(int j = 0; j < v[i].size(); j++) {
      if(v[i][j] == 1){
        ++counter;
        markPosition(v, i, j);
      }
    }
  }
  return counter;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > v;
  for(int i = 0; i < n; i++) {
    vector<int> temp;
    string s;
    cin >> s;
    for(int j = 0; j < s.size(); j++) {
      temp.push_back(s[j] - '0');
    }
    v.push_back(temp);
  }

  int islands = countIslands(v);
  islands == 0 ? cout << "nothing is left" : cout << islands;
  
  return 0;
}