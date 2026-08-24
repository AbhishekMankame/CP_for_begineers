/* Coordinate Compression

Coordinate compression is a technique used in DSA/CP to replace large or sparse values with smaller consecutive indices while preserving their relative ordering.

For example,

Original: 100, 5000, 20, 999999
Compressed: 1, 2, 0, 3

Here, the actual values are replaced by their rank after sorting:
20 --> 0
100 --> 1
5000 --> 2
999999 --> 3

Simple Definition to remember: Coordinate compression converts large values into smaller indices while maintaining their relative order, allowing us to efficiently use arrays and data structures like Fenwick Trees and Segment Trees.


*/