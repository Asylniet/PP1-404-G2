#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  stack<int> st;
  int n = 5;
  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    st.push(x);
    q.push(x);
  }

  while(!st.empty()) {
    cout << q.front() << " " << st.top() << endl;
    st.pop();
    q.pop();
  }
  return 0;
}
