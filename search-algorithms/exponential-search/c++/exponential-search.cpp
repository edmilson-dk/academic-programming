#include <iostream>

using namespace std;

int min(int left, int right) {
  return left > right ? right : left;
}

int recursiveBinarySearch(int vector[], int left, int right, int wanted) {
  if (left <= right) {
    int pivot = left + (right - left) / 2;

    if (vector[pivot] == wanted) return pivot;
    else if (vector[pivot] < wanted) {
      return recursiveBinarySearch(vector, pivot+1, right, wanted);
    } else {
      return recursiveBinarySearch(vector, left, pivot-1, wanted);
    }
  } 
  
  return -1;
}

int exponentialSearch(int vector[], int size, int wanted) {
  if (vector[0] == wanted) return 0;

  int index = 1;

  while (index < size && vector[index] <= wanted) {
    index = index * 2;
  }

  return recursiveBinarySearch(vector, index/2, min(index, size-1), wanted);
}

int main() {
  int myVector[5] = { 10, 20, 40, 50, 30 };
  int result = exponentialSearch(myVector, 5, 50);

  (result == -1) 
    ? printf("Elemento não encontrado no vetor\n")
    : printf("Elemento encontrado no índice: %d\n", result);
  return 0;
}