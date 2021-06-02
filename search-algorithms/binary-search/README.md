# Binary search

Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

__Worst case timing complexity__: O(log n)
__Best case of time complexity__: O(1)

## Summary

  __C++ implementations__

  * [Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/binary-search/c++/binary-search.cpp)
    * [Recursive Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/binary-search/c++/recursive-binary-search.cpp)
  
  __Javascript implementations__

  * [Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/binary-search/javascript/binary-search.js)
    * [Recursive Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/binary-search/javascript/recursive-binary-search.js)
  
  __Python implementations__

  * [Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/binary-search/python/binary-search.py)
    * [Recursive Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/binary-search/python/recursive-binary-search.py)

## Important points: 
 
* Works only sorted arrays.