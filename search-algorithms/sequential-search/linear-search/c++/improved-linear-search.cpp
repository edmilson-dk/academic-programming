/*

Improve Linear Search Worst-Case Complexity

if element Found at last  O(n) to O(1)
if element Not found O(n) to O(n/2)

*/

#include <iostream>

using namespace std;

int improvedLinearSearch(int *vector, int size, int wanted) {
  int left = 0;
  int right = size -1;
  int position = -1;
  
  while (left <= right) {
    if (vector[left] == wanted) {
      position = left;
      break;
    }

    if (vector[right] == wanted) {
      position = right;
      break;
    }

    left++;
    right--;
  }

  return position;
}

int main() {
  int myVector[5] = { 10, 20, 40, 50, 30 };
  int result = improvedLinearSearch(myVector, 5, 50);

  (result == -1) 
    ? cout << "Elemento não encontrado no vetor\n"
    : cout << "Elemento encontrado no índice: " << result << "\n";

  return 0;
}