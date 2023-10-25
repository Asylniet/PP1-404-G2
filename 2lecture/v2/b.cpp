#include <iostream>
using namespace std;

int main() {
  int w, h, n, sum = 0;
  cin >> w >> h >> n;
  bool a[w][h];
  // Заполням 2Д массив false ячейками
  for(int i = 0; i < w; i++) {
    for(int j = 0; j < h; j++) {
      a[i][j] = false;
    }
  }

  // Принимаем все координаты приямоугольников
  for(int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int x = x1; x < x2; x++) {
      for(int y = y1; y < y2; y++) {
        a[x][y] = true;
      }
    }
  }

  // Считаем ячейки со значение false
  int unpainted = 0;
  for(int x = 0; x < w; x++) {
    for(int y = 0; y < h; y++) {
      if(!a[x][y]) unpainted++;
    }
  }

  cout << unpainted;
  return 0;
}