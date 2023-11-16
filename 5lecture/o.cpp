// 7 LAB O
#include <iostream>
#include <string>

using namespace std;

string convertToKNary(int n, int k) {
  if (n == 0) return "";
  char digit;
  if(n % k < 10) {
    digit = n % k + '0';
  } else {
    digit = n % k - 10 + 'A';
  }
  // char digit = n % k < 10 ? n % k + '0' : n % k - 10 + 'A';
  return convertToKNary(n / k, k) + digit;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << convertToKNary(n, k);
    return 0;
}
