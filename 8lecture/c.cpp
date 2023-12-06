#include <iostream>
#include <set>
using namespace std;

bool isUnique(int n) {
  set<int> s;
  int counter = 0;
  while(n > 0) {
    int digit = n % 10;
    s.insert(digit);

    n /= 10;
    counter++;
  }
  
  return s.size() == counter;
}

int main() {
  int start, end;
  cin >> start >> end;
  for(int i = start; i <= end; i++) {
    if(isUnique(i)) {
      cout << i;
      return 0;
    }
  }
  cout << "Understandable, have a great day";
  return 0;
}