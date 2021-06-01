// O(log n)

#include <iostream>

using namespace std;

int recursiveBinarySearch(int vector[], int left, int right, int wanted) {
  if (left <= right) {
    int pivot = left + (right - left) / 2;

    if (vector[pivot] == wanted) return pivot;
    else if (vector[pivot] < wanted) {
      return recursiveBinarySearch(vector, pivot+1, right, wanted);
    } else {
      return recursiveBinarySearch(vector, left, pivot-1, wanted);
    }
  } else { return -1; }
}

int main() {
  int myVector[5] = { 10, 20, 40, 50, 30 };
  int result = recursiveBinarySearch(myVector, 0, 4, 50 );

  (result == -1) 
    ? printf("Elemento não encontrado no vetor\n")
    : printf("Elemento encontrado no índice: %d\n", result);
  return 0;
}