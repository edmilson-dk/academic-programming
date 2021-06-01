// O(log n)

function binarySearch(vector, size, wanted) {
  let left = 0;
  let right = size-1;

  while (left <= right) {
    let pivot = Math.floor(left + (right - left) / 2);

    if (vector[pivot] === wanted) return pivot;
    else if (vector[pivot] < wanted) left = pivot+1;
    else right = pivot-1;
  }

  return -1;
}

const vector = [1, 2, 3, 4, 5, 6, 7, 8, 9];

console.log(binarySearch(vector, 9, 10));