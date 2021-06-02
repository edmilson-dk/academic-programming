#include <iostream>
#include <math.h>

using namespace std;

int interpolationSearch(int vector[], int startIndex, int endIndex, int wanted) {
  bool validate = (
    startIndex <= endIndex
    && wanted >= vector[startIndex]
    && wanted <= vector[endIndex]
  );
  
  if (validate) {
    int position = startIndex + (
      round((endIndex - startIndex) / (vector[endIndex] - vector[startIndex]))
       * (wanted - vector[startIndex])
    );

    if (vector[position] == wanted) return position;

    if (vector[position] < wanted) {
      return interpolationSearch(vector, position+1, endIndex, wanted);
    }

    if (vector[position] > wanted) {
      return interpolationSearch(vector, startIndex, position-1, wanted);
    }
  }

  return -1;
}

int main() {
  int vector[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int endIndex = 8;
  int x = 6;
  int index = interpolationSearch(vector, 0, endIndex-1, x);

  index != -1
    ? printf("Elemento encontrado no índice: %d ", index)
    : printf("Elemento não encontrado :(");

  return 0;
}