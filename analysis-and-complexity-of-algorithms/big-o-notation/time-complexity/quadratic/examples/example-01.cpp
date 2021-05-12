#include <iostream>

using namespace std;

int main() {
  int n = 10;

  for (int i = 0; i < n; i++) {
    for (int c = 0; c <= i; c++) {
      cout << c;
    }

    cout << "\n";
  }

  return 0;
}

// O(n^2)

/*
  Este é um algoritmo que executa sempre em tempo quadratico por conter loops encadeados, que 
  executam em função de N.
*/