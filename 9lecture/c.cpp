// Temirlan wants to paint his fence, but because of preparation to the semi-final of ACM ICPC he asked you to paint his fence. There is a fence of infinite length. You want to paint this fence in N different colors. During the i-th operation you will paint first li meters of fence in color i. Your task is to say how many colors will be visible after N operations.#include <iostream>

#include <vector>
#include <iostream>
using namespace std;

int countVisibleColors(int N) {
  vector<int> colors(N, 0);
  int visibleColors = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = i; j <= N; j += i) {
      colors[j - 1] = i;
    }
  }

  for (int i = 0; i < N; i++) {
    if (colors[i] == i + 1) {
      visibleColors++;
    }
  }

  return visibleColors;
}

int main() {
  int N;
  cout << "Enter the number of operations: ";
  cin >> N;

  int visibleColors = countVisibleColors(N);
  cout << "Number of visible colors: " << visibleColors << endl;

  return 0;
}

// The provided code snippet performs two main tasks:

// Assigning colors to elements:

// The first nested for loop iterates over a range of numbers from 1 to N.
// The second nested for loop iterates over the same range of numbers, incrementing by the current value of i.
// Inside the second loop, the colors array is updated such that the element at index j - 1 is assigned the value of i.
// This process assigns colors to the elements in the colors array based on their position and the current value of i.
// Counting visible colors:

// After assigning colors to the elements, the second for loop iterates over the colors array.
// It checks if the value at each index i is equal to i + 1.
// If the condition is true, it means that the color assigned to the element at index i is the same as its position.
// In this case, the visibleColors variable is incremented.
// Here's an example to illustrate how the code works:

// Suppose N is 10. The initial state of the colors array is [0, 0, 0, 0, 0, 0, 0, 0, 0, 0].

// The first nested for loop starts with i = 1 and iterates up to N = 10.

// In the first iteration, the second nested for loop assigns the value 1 to the elements at indices 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9 in the colors array.
// After the first iteration, the colors array becomes [1, 1, 1, 1, 1, 1, 1, 1, 1, 1].
// In the second iteration, the second nested for loop assigns the value 2 to the elements at indices 1, 3, 5, 7, and 9 in the colors array.
// After the second iteration, the colors array becomes [1, 2, 1, 2, 1, 2, 1, 2, 1, 2].
// This process continues until the first nested for loop completes.
// After assigning colors to the elements, the second for loop iterates over the colors array.

// It checks if the value at each index i is equal to i + 1.
// In this example, the elements at indices 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9 have values 1, 2, 1, 2, 1, 2, 1, 2, 1, and 2 respectively.
// The condition colors[i] == i + 1 is true for indices 0, 2, 4, 6, and 8.
// Therefore, the visibleColors variable is incremented 5 times.
// In this example, visibleColors will have a value of 5 at the end.
// I hope this explanation helps you understand what the code does. Let me know if you have any further questions!