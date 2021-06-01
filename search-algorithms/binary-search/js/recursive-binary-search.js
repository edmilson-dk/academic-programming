// O(log n)

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

const vector = [1, 2, 3, 4, 5, 6, 7, 8, 9];

console.log(recursiveBinarySearch(vector, 0, 8, 10));