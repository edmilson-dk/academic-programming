# Jump search

With Jump Search, the sorted array of data is split into subsets of elements called blocks. We find the search key (input value) by comparing the search candidate in each block. As the array is sorted, the search candidate is the highest value of a block.

By: [Stack abuse](https://stackabuse.com/jump-search-in-python/)

__Worst case timing complexity__: O (√n) 
__Best case of time complexity__: O (√n) 

## Summary
  
  __C++ implementations__

  * [Jump search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/jump-search/c++/jump-search.cpp)

  __Javascript implementations__

  * [Jump search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/jump-search/javascript/jump-search.js)

  __Python implementations__

  * [Jump search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/jump-search/python/jump-search.py)

## Important points: 
 
* Works only sorted arrays.
* The optimal size of a block to be jumped is (√ n). This makes the time complexity of Jump Search O(√ n).
* The time complexity of Jump Search is between Linear Search ( ( O(n) ) and Binary Search ( O (Log n) ).
* Binary Search is better than Jump Search, but Jump search has an advantage that we traverse back only once (Binary Search may require up to O(Log n) jumps, consider a situation where the element to be searched is the smallest element or smaller than the smallest). So in a system where binary search is costly, we use Jump Search.