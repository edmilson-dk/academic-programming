function interpolationSearch(vector, startIndex, endIndex, wanted) {
  let validate = (
    startIndex <= endIndex 
    && wanted >= vector[startIndex] 
    && wanted <= vector[endIndex]
  );

  if (validate) {
    const position = startIndex + (
      Math.floor((endIndex - startIndex) / (vector[endIndex] - vector[startIndex]))
       * (wanted - vector[startIndex])
    );

    if (vector[position] === wanted) return position;

    if (vector[position] < wanted) {
      return interpolationSearch(vector, position+1, endIndex, wanted);
    }

    if (vector[position] > wanted) {
      return interpolationSearch(vector, startIndex, position-1, wanted);
    }
  }

  return -1;
}

const vector = [ 1, 2, 3, 4, 5, 6, 7, 8];
const endIndex = vector.length;
const x = 6
const index = interpolationSearch(vector, 0, endIndex-1, x);

index != -1
  ? console.log(`Elemento encontrado no índice: ${index}`)
  : console.log("Elemento não encontrado");