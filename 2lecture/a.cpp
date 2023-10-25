#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  if(s[2] == '1') {
    cout << 'Astana';
  } else {
    cout << "Almaty";
  }
  return 0;
}