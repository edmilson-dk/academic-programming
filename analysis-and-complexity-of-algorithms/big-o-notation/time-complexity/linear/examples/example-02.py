# O(n)

from typing import List

Vector = List[int]

n = [1, 20, 30, 40, 50, 60]
total = 0

def sumArrayElements(array: Vector) -> int:
    total = 0
    
    for v in n:
        total += v
    
    return total

print(sumArrayElements(n))