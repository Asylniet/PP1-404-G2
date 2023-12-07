// dates
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> split(string s) {
  vector<int> v;
  string currentNumber = "";
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '-' || i == s.size() - 1) {
      if(i == s.size() - 1) currentNumber += s[i];
      v.push_back(stoi(currentNumber));
      currentNumber = "";
    } else {
      currentNumber += s[i];
    }
  }
  return v;
}

bool compareDates(vector<int> &a, vector<int> &b) {
  // 0 - day
  // 1 - month
  // 2 - year
  if(a[2] == b[2]) {
    if(a[1] == b[1]) return a[0] < b[0];
    return a[1] < b[1];
  }
  return a[2] < b[2];
}

int main() {
  int n;
  cin >> n;
  vector<vector<int> > dates;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    vector<int> v = split(s);
    dates.push_back(v);
  }

  sort(dates.begin(), dates.end(), compareDates);

  for(int i = 0; i < dates.size(); i++) {
    // dates - [1, 12, 2000]
    //            [07, 12, 2023]
    //            [1, 12, 2000]
    // dates[i] - [1, 12, 2000]
    // dates[i][j] = 1
    for(int j = 0; j < dates[i].size(); j++) {
      if(dates[i][j] < 10) cout << "0";
      cout << dates[i][j];
      if(j != dates[i].size() - 1) cout << "-";
    }
    cout << endl;
  }
  return 0;
}