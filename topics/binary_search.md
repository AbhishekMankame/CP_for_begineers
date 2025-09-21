## Binary Search
Binary search is a method that allows for quicker search of something by splitting the search interval into two. Its most common application is searching values in sorted arrays, however the splitting idea is crucial in many other typical tasks.

### Search in sorted arrays
The most typical problems that leads to the binary search as follows. You're given a sorted array A1 <= A2 <= ... <= A(n-1), check if k is present within the sequence. The simplest solution would be to check every element one by one and compare it with k (a so called linear search). This approach works in O(n), but doesn't utilize the fact that the array is sorted.<br>

Now assume that we know two indices L < R such that such that A(L) <= k <= A(R). Because the array is sorted, we can deduce that k either occurs among A(L), A(L+1),...,A(R) or doesn't occur in the array at all. If we pick an arbitrary index M such that L < M < R and check whether k is less or greater than A(M). We have two possible cases:
1. A(L) <= k <= A(M). In this case, we reduce the problem from [L,R] to [L,M];
2. A(M) <= k <= A(R). In this case, we reduce the problem from [L,R] to [M,R].