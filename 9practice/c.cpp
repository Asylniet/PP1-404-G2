#include <iostream>
#include <cmath>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if(s == t) {
    cout << 0;
    return 0;
  }

  for(int i = 0; i < t.size(); i++) {
    if(s.find(t.substr(0, i + 1)) == string::npos) { // Not found
      string sub_t = t.substr(0, i);
      t.erase(0, i);
      t += sub_t;
      if(s == t) {
        cout << sub_t.size();
        return 0;
      } else {
        break;
      }
    }
  }

  cout << "Understandable have a nice day";
  
  return 0;
}