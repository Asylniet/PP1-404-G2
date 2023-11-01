#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1 = "Hello World!";

  string s2 = "Hell";
  string s3 = "hell";
  string s4 = "privet";
  // Cutting down
  // cout << s1.substr(0, 4) << endl;

  // cout << s1.find(s2) << endl;
  // cout << s1.find(s3) << endl;
  // Checking if the s2 is inside of s1
  // if(s1.find(s4) == string::npos) {
  //   cout << "404 not found";
  // }

  
  // reverse(s1.begin(), s1.end());
  cout << s1;
}