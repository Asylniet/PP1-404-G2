#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  int counter = 0;
  map<string, int>::iterator it;
  for(it = mp.begin(); it != mp.end(); it++) {
    if(it->second == 3) counter++; 
  }
  
  cout << counter;
  return 0;
}