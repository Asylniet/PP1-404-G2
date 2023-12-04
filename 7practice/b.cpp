// LAB 9 O
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, string> mp;
  for(int i = 0; i < n; i++) {
    string name, password;
    cin >> name >> password;
    mp[name] = password;
  }
  int m;
  cin >> m;
  vector<pair<string, string> > v;
  for(int i = 0; i < m; i++) {
    string name, password;
    cin >> name >> password;
    v.emplace_back(name, password);
  }

  for(int i = 0; i < m; i++) {
    string name = v[i].first;
    string password  = v[i].second;
    if(mp[name] == "") cout << "login error";
    else if(mp[name] != password) cout << "password error";
    else cout << "correct password";
    
    cout << endl;
  }
  return 0;
}