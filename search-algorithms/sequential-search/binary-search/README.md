# Binary search

Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

__Worst case timing complexity__: O(log n)
__Best case of time complexity__: O(1)

## Summary

* [Sequential search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/sequential-search)
  * [Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/sequential-search/binary-search/binary-search.py)
  * [Recurisve Binary search](https://github.com/edmilson-dk/academic-programming/blob/main/search-algorithms/sequential-search/binary-search/recursive-binary-search.py)