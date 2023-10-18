#include <iostream>
using namespace std;

int main() {
  int n, start, end;
  cin >> n >> start >> end;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = start; i < end; i++) {
    int temp = a[i];
    a[i] = a[start - 1 + end - 1 - i];
    a[start - 1 + end - 1 - i] = temp;
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}