#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool compareWords(pair<string, int> &a, pair<string, int> &b) {
  if(a.second == b.second) return a.first < b.first;
  return a.second > b.second;
}

int main() {
  string s;
  getline(cin, s);
  map<string, int> mp;
  vector<pair<string, int> > v;

  string currentWord = "";
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ' || i == s.size() - 1) {
      if(i == s.size() - 1) currentWord += s[i];
      mp[currentWord]++;
      currentWord = "";
    } else {
      currentWord += s[i];
    }
  }

  map<string, int>::iterator it;
  for(it = mp.begin(); it != mp.end(); it++) {
    v.emplace_back(it->first, it->second);
    // v.push_back(make_pair(it->first, it->second));
  }

  sort(v.begin(), v.end(), compareWords);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i].first << " : " << v[i].second << endl;
  }
  
  return 0;
}