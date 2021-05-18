// O(log n)

#include <iostream>

using namespace std;

int binarySearch(int vector[], int size, int wanted) {
  int left = 0;
  int right = size-1;

  while (left <= right) {
    int pivot = left + (right - left) / 2;

    if (vector[pivot] == wanted) return pivot;
    else if (vector[pivot] < wanted) left = pivot+1;
    else right = pivot-1;
  }

  return -1;
}

int main() {
  int myVector[5] = { 10, 20, 40, 50, 30 };
  int result = binarySearch(myVector, 5, 20);

  (result == -1) 
    ? printf("Elemento não encontrado no vetor\n")
    : printf("Elemento encontrado no índice: %d\n", result);

  return 0;
}