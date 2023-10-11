// Вывести наименьший делитель числа больше единицы
#include <iostream>
using namespace std;

int main() {
  int n, divisor = 0;
  cin >> n;
  for(int i = 2; i < n; i++) {
    // 10 % 2 == 0
    if(n % i == 0) {
      divisor = i;
      break;
    }
  }

  if(divisor > 0) cout << divisor;
  else cout << n;
  return 0;
}