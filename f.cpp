// Даётся 3 числа, надо отсортировать и ревёрснуть
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr[3];
  for(int i = 0; i < 3; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + 3);
  for(int i = 3 - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }

  return 0;
}
