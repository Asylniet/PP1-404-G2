#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> findIngredients(string target, vector<pair<string, string> > &v) {
  vector<string> result;
  for (int i = 0; i < v.size(); i++) {
    if(v[i].first == target) result.push_back(v[i].second);
    else if(v[i].second == target) result.push_back(v[i].first);
  }
  return result;
}

int main() {
  int n, m;
  cin >> n;
  vector<pair<string, string> > v;
  vector<string> available;
  string target;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    available.push_back(s);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    string first, second;
    cin >> first >> second;
    v.push_back(make_pair(first, second));
  }

  cin >> target;

  vector<string> results = findIngredients(target, v);
  sort(results.begin(), results.end());

  if(results.size() == 0) cout << 0;
  else {
    cout << results.size() << endl;
    for (int i = 0; i < results.size(); i++)
    {
      cout << results[i] << " ";
    }
  }
    
  return 0;
}