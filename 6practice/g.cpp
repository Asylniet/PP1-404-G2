#include <iostream>
#include <queue>
using namespace std;

int main() {
  string s;
  cin >> s;
  queue<char> q;
  queue<char> q2;

  for(int i = 0; i< s.size(); i++) q.push(s[i]);

  char temp = ' ';
  while(!q.empty()) {
    if(q.front() == '1') {
      if(temp == ' ') temp = q.front();
      else temp = ' ';
    } else { // q.front() == '0'
      if(temp == '1') {
        q2.push(temp);
        temp = ' ';
      }
      q2.push(q.front());
    }
    q.pop();
  }
  if(temp == '1') q2.push(temp);

  while(!q2.empty()) {
    cout << q2.front();
    q2.pop();
  }
  
  return 0;
}