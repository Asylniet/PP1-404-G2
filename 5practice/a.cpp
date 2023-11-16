#include <iostream>
#include <string>
using namespace std;

string searchPattern(string mail, string pattern) {
  if(mail.find(pattern) != string::npos) {
    int position = mail.find(pattern);
    if(mail.size() - pattern.size() == position) {
      return mail.substr(0, position);
    }
  }
  return "";
}

int main() {
  int n;
  cin >> n;
  string mails[n];
  for(int i = 0; i < n; i++) cin >> mails[i];

  for(int i = 0; i < n; i++) {
    string mail = mails[i];
    if(searchPattern(mail, "@gmail.com") != "") {
      cout << searchPattern(mail, "@gmail.com") << endl;
    }
  }
  return 0;
}