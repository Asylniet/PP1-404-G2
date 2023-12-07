#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> m;
  int b[m];
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  int size = n + m;
  int c[size];
  for(int i = 0; i < size; i++) {
    if(i < n) c[i] = a[i];
    else c[i] = b[i - n];

    // c[i] = i > n ? a[i] : b[i - n];
  }
  // for(int i = 0; i < n; i++) c[i] = a[i];
  // for(int i = 0 ; i < m; i++) c[i + n] = b[i]; 

  sort(c, c + size);
  for(int i = 0; i < size; i++) {
    cout << c[i] << " ";
  }
  
  return 0;
}