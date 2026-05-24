## Amortized Time Complexity:

### Glance of Time Complexity
The time complexity doesn't indicate the exact execution time of an algorithm instead it gives an idea of the variation of time with a corresponding variation of input size.

### Introduction to Amortized time complexity
Amortized time complexity is the "Expected Time Complexity" used to express time complexity when an algorithm has expensive worst-case time complexity once in a while compared to the time complexity that occurs most of the time. <br>
Amortized complexity is used when algorithms have expensive operations that occurs rarely.


### Understanding amortization using Dynamic Array:
Dynamic Array is the best example to understand Amortized Time Complexity.<br>
A dynamic array is a linear data structure that is growable and shrinkable in size upon necessity.<br>
vector in C++ and ArrayList in Java and List in Python use the concept of Dynamic array in their implementation.<br>
There arise two cases for insertion in the dynamic array:
1. When there exists free space in the array. Time complexity here is O(1).
2. When there is no space, a new array is to be created of size double the original array, the elements in the original array are to be copied, and the new element is inserted.<br>
Time complexity here is: Creation of a new array of double the original size + Copying the elements of the original array + Insertion of the new element<br>
==> O(2N) + O(N) + O(1) = O(3N+1) where N is the size of the original array.