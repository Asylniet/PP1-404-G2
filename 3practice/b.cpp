#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sortInRange(string str, int start, int length) {
  string beforeStart = str.substr(0, start);
  string needsToBeSorted = str.substr(start, length);
  string rest = str.substr(start + length, str.size() - (start + length));

  sort(needsToBeSorted.begin(), needsToBeSorted.end());
  return beforeStart + needsToBeSorted + rest;
}

int main() {
  cout << sortInRange("Asylniet", 2, 3);
  string s = "Hello World!";
  cout << sortInRange(s, 0, s.size());
  return 0;
}