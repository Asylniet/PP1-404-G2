#include <iostream>
using namespace std;

int main() {
  int h1, m1, h2, m2;
  cin >> h1 >> m1 >> h2 >> m2;

  if((h2 < h1) || (h2 <= h1 && m2 <= m1)) cout << "No";
  else cout << "Yes";
  
  return 0;
}