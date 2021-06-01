# worst case timing complexity = O (√n) 

from math import sqrt

def jumpSearch(vector, size, wanted):
    step = round(sqrt(size))
    prev = 0

    # resolved bug in search item in last vector position
    if vector[size-1] == wanted: return size-1;

    while vector[min(step, size)-1] < wanted:
        prev+=1
        step += round(sqrt(size))
        
        if prev >= size: return -1

    while vector[prev] < wanted:
        prev+=1

        if prev == min(step, size): return -1

    if vector[prev] == wanted: return prev

    return -1

vector = [20, 33, 22, 12, 34, 55, 44]

print(jumpSearch(vector, len(vector), 44))