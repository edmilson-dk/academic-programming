/*
worst case timing complexity = O(N)
*/

#include <iostream>

using namespace std;

int linearSearch(int *vector, int size, int wanted) {
  for (int i = 0; i < size; i++) {
    if (vector[i] == wanted) {
      return i;
    }
  }

  return -1;
}

int main() {
  int myVector[5] = { 10, 20, 40, 50, 30 };
  int result = linearSearch(myVector, 5, 70);

  (result == -1) 
    ? cout << "Elemento não encontrado no vetor\n"
    : cout << "Elemento encontrado no índice: " << result << "\n";

  return 0;
}