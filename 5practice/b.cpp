#include <iostream>
using namespace std;

int main() {
  //class functions: s.func() -> substr, erase, find, append, replace, push_back
  //general functions: func(s.begin(), s.end()) -> sort, reverse

  string s = "Hello, Dulat! We love you) Joking";
  cout << "size - " << s.size() << " minus - " << s.size() - 14 << endl << endl;
  cout << "Substr:" << endl;
  // s.subsr(int a, int b);
  // a - starting position, b - steps forward
  // Keeps only this range
  // Returns new string
  string substring = s.substr(14, s.size() - 14);
  cout << substring << endl << endl;

  cout << "Erase:" << endl;
  // s.erase(int a, int b);
  // a - starting position, b - steps forward
  // Deletes this range
  // Changes original string
  s.erase(14, s.size() - 14);
  cout << s << endl << endl;

  cout << "Find:" << endl;
  int position = s.find("Dulat");
  // s.erase(string sub);
  // sub - string you are searching
  // Returns starting position of string::npos
  // To check if there is Dulat in string you can use ...
  // ... s.find("Dulat") != string::npos;
  cout << position << endl;
  cout << "at position " << position << " there is " << s[position] << endl << endl;

  cout << "Append:" << endl;
  // s.append(string addition);
  // s.append(string addition, int start, int end); DO NOT USE!
  // addition - string you are adding
  // Adds to original string
  s.append("We adore you!");
  cout << s << endl << endl;

  cout << "Replace:" << endl;
  // Trying to replace Dulat
  // s.replace(int start, int steps, string replacement);
  // Replaces range in original string with new string
  string target = "Dulat";
  int start = s.find(target);
  s.replace(start, target.size(), "Yerasyl");
  cout << s << endl << endl;

   cout << "Push back:" << endl;
  // s.push_back(char addition);
  // addition - char you are adding
  // Adds to original string
  // Is equal to s += ')';
  s.push_back(')');
  cout << s << endl << endl;

  //general functions: func(s.begin(), s.end()) -> sort, reverse
  cout << "Sort:" << endl;
  //Sort by ASCII Code
  sort(s.begin(), s.end());
  cout << s << endl << endl;

  cout << "Reverse:" << endl;
  // Just reverses
  reverse(s.begin(), s.end());
  cout << s;

  return 0;
}