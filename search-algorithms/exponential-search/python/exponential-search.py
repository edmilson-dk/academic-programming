def recursiveBinarySearch(vector, left_index, right_index, wanted):
  if left_index <= right_index:
    pivot = round(left_index + (right_index - left_index) / 2)

    if (vector[pivot] == wanted): return pivot
    elif vector[pivot] < wanted: 
      return recursiveBinarySearch(vector, pivot+1, right_index, wanted)
    else: 
      return recursiveBinarySearch(vector, left_index, pivot-1, wanted)
  else:
    return -1

def exponentialSearch(vector, size, wanted):
  if (vector[0] == wanted): return 0;

  index = 1

  while (index < size and vector[index] <= wanted):
    index *= 2

  return recursiveBinarySearch(vector, index/2, min(index, size-1), wanted)


vector = [ 1, 2, 3, 4, 5, 6, 7, 8];
x = 6
index = exponentialSearch(vector, len(vector), x);

if index != 1: print(f"Elemento encontrado no índice: {index}")
else: print("Elemento não encontrado")
