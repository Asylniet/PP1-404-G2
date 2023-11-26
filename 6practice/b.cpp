#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x]++;
  }
  int counter = 0;
  map<int, int>::iterator it;
  for(it = mp.begin(); it != mp.end(); it++) {
    if(it->second > 1) counter++; 
  }
  
  cout << counter;
  return 0;
}