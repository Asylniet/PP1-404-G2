#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 5;
  vector<int> v;
  for(int i =0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  // v.insert(v.end() - (v.size() / 2), 1999);
  v.erase(v.begin(), v.end() - (v.size() / 2));

  cout << endl << "PRINTING VECTOR" << endl;

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  
  return 0;
}