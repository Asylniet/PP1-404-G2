#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  int n;
  cin >> n;
  char letters[n];
  int occurances[n];
  for(int i = 0; i < n; i++) {
    cin >> letters[i];
    occurances[i] = 0;
  }
  sort(letters, letters + n);

  for(int i = 0; i < s.size(); i++) {
    for(int j = 0; j < n; j++) {
      if(s[i] == letters[j]) {
        occurances[j]++;
      }
    }
  }

  for(int dulat = 0; dulat < n; dulat++) {
    cout << letters[dulat] << " - " << occurances[dulat] << endl;
  }
  return 0;
}
