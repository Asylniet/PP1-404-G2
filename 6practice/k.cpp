#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int largestRectangleArea(const vector<int>& heights) {
  stack<int> s;
  int maxArea = 0;
  int i = 0;

  while (i < heights.size()) {
    if (s.empty() || heights[i] >= heights[s.top()]) {
      s.push(i);
      i++;
    } else {
      int topIndex = s.top();
      s.pop();
      int width = s.empty() ? i : i - s.top() - 1;
      maxArea = max(maxArea, heights[topIndex] * width);
    }
  }

  while (!s.empty()) {
    int topIndex = s.top();
    s.pop();
    int width = s.empty() ? i : i - s.top() - 1;
    maxArea = max(maxArea, heights[topIndex] * width);
  }

  return maxArea;
}

int main() {
  int n;
  cin >> n;

  vector<int> heights(n);
  for (int i = 0; i < n; i++) {
      cin >> heights[i];
  }

  int result = largestRectangleArea(heights);
  cout << result;

  return 0;
}
