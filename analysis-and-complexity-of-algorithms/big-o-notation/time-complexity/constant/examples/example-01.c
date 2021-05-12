#include <stdio.h>
#include <math.h>

int quadratic(int n) {
  return pow(n, 2);
}

int main() {
  int r = quadratic(10);

  return 0;
}

// O(1)

/*
  Este algoritmo executa em tempo constante pois indenpente da entrada N, ele vai executar a mesma quantidade de vezes
*/