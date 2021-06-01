/*
worst case timing complexity = O (√n) 
*/

#include <iostream>
#include <math.h>

using namespace std;

int min(int left, int right) {
  return left > right ? right : left;
}

int jumpSearch(int vector[], int size, int wanted) {
  int step = sqrt(size);
  int prev = 0;

  // resolved bug in search item in last vector position
  if (vector[size-1] == wanted) return size-1;

  while (vector[min(step, size)-1] < wanted) {
    prev = step;
    step += sqrt(size);

    if (prev >= size) return -1;
  }

  while (vector[prev] < wanted) {
    prev++;

    if (prev == min(step, size)) return -1;
  }

  if (vector[prev] == wanted) return prev;

  return -1;
}

int main() {
  int myVector[5] = { 10, 20, 40, 50, 30 };
  int result = jumpSearch(myVector, 5, 30);

  (result == -1) 
    ? printf("Elemento não encontrado no vetor\n")
    : printf("Elemento encontrado no índice: %d\n", result);

  return 0;
}