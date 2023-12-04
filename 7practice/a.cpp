// LAB 9 N
#include <iostream>
#include <vector>
using namespace std;

bool find(vector<int> &v, int k) {
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == k) return true;
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  int counter = 0;
  // i < j <= n
  for(int i = 0; i < n - 1; i++) {
    for(int j = i + 1; j < n; j++) {
      if(find(v, v[i] ^ v[j])) {
        counter++;
      }
    }
  }

  cout << counter;
  return 0;
}