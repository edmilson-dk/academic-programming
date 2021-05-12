// O(log n)

function binarySearch(array, item) {
  let startIndex = 0;
  let endIndex = (array.length) -1;

  while (startIndex <= endIndex) {
    let pivot = Math.floor(( startIndex + endIndex) / 2);

    if (array[pivot] === item){
         return `Item ${item} está na posição ${pivot}`;
    } else if (array[pivot] < item){
        startIndex = pivot + 1;
    } else {
        endIndex = pivot - 1;
    }
  }
  
  return false;
}