#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);
  reverse(a, a + n);

  int maxOccurances = 1;
  for(int i = 0; i < n; i++) {
    int counter = 1;
    for(int j = i + 1; j < n; j++) {
      if(a[i] == a[j]) counter++;
    }
    if(counter > maxOccurances) maxOccurances = counter;
  }

  for(int i = 0; i < n; i++) {
    int counter = 1;
    for(int j = i + 1; j < n; j++) {
      if(a[i] == a[j]) counter++;
    }
    if(counter == maxOccurances) cout << a[i] << " ";
  }
  return 0;
}