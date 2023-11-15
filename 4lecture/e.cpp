#include <iostream>
using namespace std;

int rec(string s, int cnt = 0, int i= 0){
  if(i == s.size()) return cnt;
  if(isdigit(s[i])) cnt++;
  return rec(s, cnt, i + 1);
}

int main(){
  string s;
  cin >> s;
  cout << rec(s);
  return 0;
}