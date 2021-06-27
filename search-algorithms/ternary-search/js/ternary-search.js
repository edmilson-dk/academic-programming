function ternarySearch(vector, left, right, wanted) {
  if (right >= left) {
    let middlePrimary = Math.round(left + (right - left) / 3);
    let middleSecond = Math.round(right - (right - left)  / 3);
    
    if (vector[middlePrimary] === wanted) return middlePrimary;
    if (vector[middleSecond] === wanted) return middleSecond;

    if (wanted < vector[middlePrimary]) {
      return ternarySearch(vector, left, middlePrimary-1, wanted);
    } else if (wanted > vector[middleSecond]) {
      return ternarySearch(vector, middleSecond+1, right, wanted);
    } else {
      return ternarySearch(vector, middlePrimary+1, middleSecond-1, wanted);
    }
  }

  return -1;
}

const vector = [ 1, 2, 3, 4, 5, 6, 7, 8];
const x = 6
const index = ternarySearch(vector, 0, vector.length-1, x);

index != -1
  ? console.log(`Elemento encontrado no índice: ${index}`)
  : console.log("Elemento não encontrado");
