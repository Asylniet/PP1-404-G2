#include <iostream>
using namespace std;

int main() {
  string first, second;
  cin >> first >> second;

  if(first.find(second) != string::npos) {
    cout << first;
    return 0;
  }

  bool isIncluded = false;
  for(int i = 0; i < second.size(); i++) {
    if(first.find(second.substr(0, i + 1)) != string::npos) {
      isIncluded = true;
    } else {
      if(isIncluded) {
        cout << first << second.erase(0, i);
      }
      break;
    }
  }

  if(!isIncluded) cout << first << second;
  
  return 0;
}