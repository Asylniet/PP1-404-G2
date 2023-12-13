#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

bool compareStudents(pair<pair<string, string>, double> &a, pair<pair<string, string>, double> &b) {
  if(a.second == b.second) {
    pair<string, string> aName = a.first;
    pair<string, string> bName = b.first;

    if(aName.second == bName.second) return aName.first < bName.first;
    return aName.second < bName.second;
  }
  return a.second < b.second;
}

int main() {
  map<string, double> mp;
  mp["A+"] = 4;
  mp["A"] = 3.75;
  mp["B+"] = 3.5;
  mp["B"] = 3;
  mp["C+"] = 2.5;
  mp["C"] = 2;
  mp["D+"] = 1.5;
  mp["D"] = 1;
  mp["F"] = 0;

  vector<pair<pair<string, string>, double> > v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string name, surname;
    int subjectCount;
    cin >> name >> surname >> subjectCount;
    double topSum = 0, bottomSum = 0;
    for(int j = 0; j < subjectCount; j++) {
      string grade;
      int credit;
      cin >> grade >> credit;
      topSum += mp[grade] * credit;
      bottomSum += credit;
    }

    double gpa = topSum / bottomSum;
    v.push_back(make_pair(make_pair(name, surname), gpa));
  }

  sort(v.begin(), v.end(), compareStudents);

  for(int i = 0; i < v.size(); i++) {
    // v[i].first - pair<name, surname>
    cout << v[i].first.first << " " << v[i].first.second << " ";
    cout << fixed << setprecision(3) << v[i].second << endl;
  }
  
  return 0;
}