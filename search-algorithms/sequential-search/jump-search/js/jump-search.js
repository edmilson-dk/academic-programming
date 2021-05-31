function jumpSearch(array, size, wanted) {
  let step = Math.sqrt(size);
  let prev = 0;

  if (array[size-1] === wanted) return size-1;

  while (array[Math.min(step, size)-1] < wanted) {
    prev = step;
    step += Math.sqrt(size);

    if (prev >= size) return -1;
  }

  if (array[prev] < wanted) {
    prev++;

    if (prev === Math.min(step, size)) return -1;
  }

  if (array[prev] === wanted) return prev;

  return -1;
}

const array = [1, 2, 3, 4, 5, 6, 7, 8 ];
console.log(jumpSearch(array, 8, 7));