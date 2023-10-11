// полиндром числа
#include <iostream>
using namespace std;

// 345
// 0 * 10 + 5 = 5
// 5 * 10 + 4 = 54
// 54 * 10 + 3 = 543

int main() {
  int num, reversedNum = 0, originalNum;
  cin >> num;
  originalNum = num;
  while(num > 0) {
    int lastDigit = num % 10;
    reversedNum = reversedNum * 10 + lastDigit;
    num /= 10;
  }

  if(reversedNum == originalNum) cout << "YES";
  else cout << "NO";

  return 0;
}