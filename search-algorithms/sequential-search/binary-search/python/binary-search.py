# O(log n)

def binarySearch(vector, size, wanted):
    left_index = 0
    right_index = size-1
  
    while left_index <= right_index:
        pivot = round(left_index + (right_index - left_index) / 2)

        if vector[pivot] == wanted: return pivot
        elif vector[pivot] < wanted: left_index = pivot+1
        else: right_index = pivot-1

    return -1

vector = [1, 2, 3, 4, 5, 6, 7, 8, 9]

print(binarySearch(vector, 9, 7))