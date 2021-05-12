// O(n^2)

#include <stdio.h>

void matchElement(int *vector, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i != j && vector[i] == vector[j]) {
        printf("\nElemento correspondentes na posição [%d] e [%d]\n", i, j);
      }
    }
  }
}

int main() {
  int numbers[10] = {1, 2, 1, 3, 4, 5, 3, 8, 6, 5};

  matchElement(numbers, 10);
}