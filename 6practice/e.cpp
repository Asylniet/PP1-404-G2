#include <iostream>
#include <queue>
using namespace std;

bool isValidBracket(string s) {
  queue<char> q;

  for(int i = 0; i < s.size(); i++) {
    q.push(s[i]);
  }

  int openBrackets = 0;
  while(!q.empty()) {
    if(q.front() == '(') {
      openBrackets++;
    } else {                // q.front() == ')'
      if(openBrackets <= 0) return false;
      else openBrackets--;
    }
    q.pop();
  }

  if(openBrackets == 0) return true;
  return false;
}

int main() {
  string s;
  cin >> s;
  isValidBracket(s) ? cout << "Yes" : cout << "No";
  return 0;
}