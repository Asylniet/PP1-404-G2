// Известны результаты каждой из 4х четвертей баскетбольной встречи. Нужно определить победителя матча. Побеждает команда, набравшая больше очков в течение всего матча.

// 10 24
// 30 15
// 15 26
// 7 10

#include <iostream>
using namespace std;

int main() {
  int firstSum = 0, secondSum = 0;
  for(int i = 1; i <= 4; i++) {
    int a, b;
    cin >> a >> b;
    firstSum += a;
    secondSum += b;
  }

  if(firstSum == secondSum) cout << "Tie";
  else if(firstSum > secondSum) cout << 1;
  else cout << 2;
  return 0;
}