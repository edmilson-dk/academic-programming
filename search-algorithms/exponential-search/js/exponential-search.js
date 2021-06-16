function exponentialSearch(vector, size, wanted) {
  if (vector[0] === wanted) return 0;

  let index = 1;

  while (index < size && vector[index] <= wanted) { 
    index = index * 2;
  }

  return recursiveBinarySearch(vector, index/2, Math.min(index, size-1), wanted); 
}

function recursiveBinarySearch(vector, left, right, wanted) {
  if (left <= right) {
    let pivot = Math.floor(left + (right - left) / 2); 

    if (vector[pivot] === wanted) return pivot;
    else if (vector[pivot] < wanted) {
      return recursiveBinarySearch(vector, pivot+1, right, wanted);
    } else {
      return recursiveBinarySearch(vector, left, pivot-1, wanted);
    }
  } else { return -1 };
}

const vector = [ 1, 2, 3, 4, 5, 6, 7, 8];
const x = 6
const index = exponentialSearch(vector, vector.length, x);

index != -1
  ? console.log(`Elemento encontrado no índice: ${index}`)
  : console.log("Elemento não encontrado");
