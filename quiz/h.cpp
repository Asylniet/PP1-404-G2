// Чувак водитель автобуса, ты вводишь количество людей в автобусе и при четном количестве остановок 4 человека выходят, а при нечётных 3 заходит и ещё водителю не нравится каждая седьмая остановка и он ее пропускает. Вывести надо сколько он таким образом наматет остановок
#include <iostream>
using namespace std;

int main() {
  int people, stops = 0;
  cin >> people;
  while(people > 0) {
    stops++;
    if(stops % 7 != 0) {
      // We stopped
      if(stops % 2 == 0) people -= 4;
      else people += 3;
    }
  }
  cout << stops;
  return 0;
}