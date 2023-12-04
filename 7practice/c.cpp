// 2018, Quiz3 V1.pdf E
#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp1;
  map<int, int> mp2;

  int zeroCounter = 0;
  while(zeroCounter < 2) {
    int x;
    cin >> x;
    if(x == 0) zeroCounter++;
    else {
      if(zeroCounter == 0) mp1[x]++;
      else mp2[x]++;
    }
  }

  for(int i = 1; i <= n; i++) {
    if(mp1[i] > 0 && mp2[i] > 0) cout << i << " ";
  }

  cout << endl;

  for(int i = 1; i <= n; i++) {
    if(mp1[i] == 0 && mp2[i] == 0) cout << i << " ";
  }
  return 0;
}
