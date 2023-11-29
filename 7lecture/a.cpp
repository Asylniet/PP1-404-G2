#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }

  map<int, int>::iterator it;
  int i = 0;
  for(it = mp.begin(); it != mp.end(); it++) {
    if(i == 1) {
      cout << it->second;
      break;
    }
    i++;
  }

  return 0;
}