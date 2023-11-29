#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  string s;
  getline(cin, s);
  cin >> n;
  vector<char> v;
  for(int i = 0; i < s.size(); i++) {
    v.push_back(s[i]);
  }

  for(int i = n; i < v.size(); i++) {
    cout << v[i];
  }
  
  return 0;
}