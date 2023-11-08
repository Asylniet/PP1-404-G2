#include <iostream>
using namespace std;

string binarySearch(int a[], int k, int start, int end) {
  int middle = start + (end - start) / 2;
  if(start > end) return "NO";

  if(a[middle] == k) return "YES";
  else if(a[middle] < k) return binarySearch(a, k, middle + 1, end);
  else if(a[middle] > k) return binarySearch(a, k, start, middle - 1);
  return "NO";
}

int main() {
  int n, k;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> k;
  cout << binarySearch(a, k, 0, n - 1);
  return 0;
}