/*

Improve Linear Search Worst-Case Complexity

if element Found at last  O(n) to O(1)
if element Not found O(n) to O(n/2)

*/

function improvedLinearSearch(vector, size, wanted) {
  let left = 0;
  let right = size -1;
  let position = -1;

  while (left <= right) {
    if (vector[left] === wanted) {
      position = left;
      break;
    }

    if (vector[right] === wanted) {
      position = right;
      break;
    }

    left++;
    right--;
  }

  return position;
}

const array = [20, 40, 23, 22, 90, 12];

console.log(improvedLinearSearch(array, array.length, 90));