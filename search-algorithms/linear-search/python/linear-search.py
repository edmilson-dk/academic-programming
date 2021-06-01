"""
worst case timing complexity = O(N)
"""

def linearSearch(vector, wanted):
    for i, v in enumerate(vector):
        if v == wanted: return i

    return -1

vector = [20, 21, 43, 2, 12, 122]

print(linearSearch(vector, 12))