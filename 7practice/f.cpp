// 2018, Quiz3 V1.pdf F
#include <iostream>
#include <map>
using namespace std;

pair<string, int> split(string s) {
  string name;
  string score;
  for(int i = s.size() - 1; i >= 0; i--) {
    if(s[i] == ' ') {
      name = s.substr(0, i);
      score = s.substr(i + 1, s.size() - 1 - i);
      break;
    }
  }
  int res = stoi(score); // string score to int
  pair<string, int> p(name, res);
  return p;
}

int main() {
  int n;
  cin >> n;
  cin.ignore();
  map<int, string> mp;
  for(int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    pair<string, int> p = split(s);
    mp[p.second] = p.first;
  }

  cout << mp.rbegin()->second << " " << mp.rbegin()->first;
  return 0;
}