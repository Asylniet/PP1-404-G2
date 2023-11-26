#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<string> st;
  for(int i = 0; i < n; i++) {
    int prevSize = st.size();
    string s;
    cin >> s;
    st.insert(s);
    prevSize == st.size() ? cout << "user already exists\n" : cout << "new user added\n";
  }
  return 0;
}