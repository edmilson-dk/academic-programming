/*
worst case timing complexity = O(N)
*/

function linearSearch(array, size, wanted) {
  for (i = 0; i < size; i++) {
    if (array[i] === wanted) return i;
  }

  return -1;
}

const array = [20, 40, 23, 22, 90, 12];

console.log(linearSearch(array, array.length, 90));