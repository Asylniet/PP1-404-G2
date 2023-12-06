#include <iostream>
#include <deque>
using namespace std;

int main() {
  int n;
  cin >> n;
  deque<string> dq;
  string messages[n];
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x == 1) {
      string s;
      cin >> s;
      dq.push_front(s);
    } else {
      dq.pop_front();
    }
    messages[i] = dq.empty() ? "queue is empty" : dq.front();
  }

  for(int i = 0; i < n; i++) {
    cout << messages[i] << endl;
  }
  return 0;
}