// Найти сумму всех чисел внутри одного числа
// Найти умножение всех чисел друг на друга внутри одного числа
// суммировать их
#include <iostream>
using namespace std;

// 147 % 10 = 7
// 14 % 10 = 4
// 1 % 10 = 1
// 1 / 10 = 0; end

int main() {
  int n, plusSum = 0, multiSum = 1;
  cin >> n;
  while(n > 0) {
    int lastDigit = n % 10;
    plusSum += lastDigit;
    multiSum *= lastDigit;
    n /= 10;
  }
  cout << plusSum + multiSum;
  return 0;
}