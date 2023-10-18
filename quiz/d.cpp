// выпускают кофты размера м и s, и есть люди которые носят размер м и s. Люди которые носят s могут одеть и мку.
// х - кол-во кофт м
// у - кол-во кофт с
// м - кол-во людей кто носит м
// н - колво людей кто носит с
// хватит ли одежда всем
#include <iostream>
using namespace std;

int main() {
  int coftaM, CoftaS, m, s;
  cin >> coftaM >> CoftaS >> m >> s;
  if (coftaM >= m && coftaM - m >= s - CoftaS) cout << "Yes";
  else cout << "No";
  return 0;
}