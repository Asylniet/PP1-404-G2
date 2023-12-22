#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, string> mp;
  map<string, string>::iterator it;

  for (int i = 0; i < n; i++) {
    string first, second;
    cin >> first >> second;
    bool isFound = false;
    for(it = mp.begin(); it != mp.end(); it++) {
      if(it->second == first) {
        isFound = true;
        mp[it->first] = second;
        break;
      }
    }
    if(!isFound) mp[first] = second;
  }

  cout << mp.size() << endl;
  for(it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  
  return 0;
}