// Вывести является ли введенное числом квадратом другого числа
#include <iostream>
using namespace std;

int main() {
  int n, square = 0;
  cin >> n;
  for(int i = 2; i * i <= n; i++) {
    if(i * i == n) {
      square = i;
      break;
    }
  }

  if(square > 0) cout << square;
  else cout << "NO";
  return 0;
}