# O(log n)

def recursiveBinarySearch(vector, left_index, right_index, wanted):
  if left_index <= right_index:
    pivot = left_index + (right_index - left_index) / 2

    if (vector[pivot] == wanted): return pivot
    elif vector[pivot] < wanted: 
      return recursiveBinarySearch(vector, pivot+1, right_index, wanted)
    else: 
      return recursiveBinarySearch(vector, left_index, pivot-1, wanted)
  else:
    return -1

vector = [1, 2, 3, 4, 5, 6]

print(recursiveBinarySearch(vector, 0, len(vector)-1, 5))