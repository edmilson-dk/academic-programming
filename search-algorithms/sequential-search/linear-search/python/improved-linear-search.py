"""

Improve Linear Search Worst-Case Complexity

if element Found at last  O(n) to O(1)
if element Not found O(n) to O(n/2)

"""

def improvedLinearSearch(vector, wanted):
    left = 0
    right = len(vector)-1
    position = -1

    while left <= right:
        if vector[left] == wanted:
            position = left 
            break

        if vector[right] == wanted:
          position = right
          break

        left+=1
        right-=1

    return position
        
vector = [20, 21, 43, 2, 12, 122]

print(improvedLinearSearch(vector, 12))