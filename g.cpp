// Есть крутой чувак который крутой работник и ему босс поднимает зарплату на 10% каждый месяц и ещё вышел новый айфон который стоит 500 000тнг и он хочет купить его так что он из своей зарплаты оставляет на айфон 30% и надо найти количество месяцев которые потребуются для накопления нужной суммы(500 000тнг) для айфона
#include <iostream>
using namespace std;

int main() {
  int salary, savings = 0, month = 0;
  cin >> salary;
  while(savings < 500000) {
    month++;
    savings += salary * 0.3;
    salary *= 1.1;
    // 100 + 10% = 100 + (100 * 0.1) = 100 * (1 + 0.1) = 100 * 1.1
  }

  cout << month;
  return 0;
}