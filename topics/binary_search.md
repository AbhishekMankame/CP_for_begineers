## Binary Search
Binary search is a method that allows for quicker search of something by splitting the search interval into two. Its most common application is searching values in sorted arrays, however the splitting idea is crucial in many other typical tasks.

### Search in sorted arrays
The most typical problems that leads to the binary search as follows. You're given a sorted array A1 <= A2 <= ... <= A(n-1), check if k is present within the sequence. The simplest solution would be to check every element one by one and compare it with k (a so called linear search). This approach works in O(n), but doesn't utilize the fact that the array is sorted.<br>

Now assume that we know two indices L < R such that such that A(L) <= k <= A(R). Because the array is sorted, we can deduce that k either occurs among A(L), A(L+1),...,A(R) or doesn't occur in the array at all. If we pick an arbitrary index M such that L < M < R and check whether k is less or greater than A(M). We have two possible cases:
1. A(L) <= k <= A(M). In this case, we reduce the problem from [L,R] to [L,M];
2. A(M) <= k <= A(R). In this case, we reduce the problem from [L,R] to [M,R].

When it is impossible to pick M, that is, when R=L+1, we directly compare k with A(L) and A(R). Otherwise we would want to pick M in such manner that it reduces the active segment to a single element as quickly as possible in the worst case.<br>
Since in the worst case we will always reduce to larger segment of [L,M]. Thus, in the worst case scenario the reduction would be from R-L to max(M-L, R-M). To minimize this value, we should pick M = (L+R)/2, then 
<pre>M-L=(R-L)/2=R-M</pre>
In other words, from the worst-case scenario perspective it is optimal to always pick M in the middle of [L,R] and split it in half. Thus, the active segment halves on each step until it becomes of size 1. So, if the process needs h steps, in the end it reduces the difference between R and L from R-L to (R-L)/2^h = 1 giving us the equation 2^h = R-L. <br>
Taking log2 on both sides, we get h=log2(R-L) belongs to "∈" O(log n).<br>
Logarithmic number of steps is drastically better than that of linear search. For example, for n=2^20=10^6 you would need to make approximately a million operations for linear search, but only 20 operations with the binary search.
<br>

### Lower bound and upper bound
It is often convenient to find the position of the first element that is greater or equal than k (called the lower bound of k in the array) or the position of the first element that is greater than k (called the upper bound of k) rather than the exact position of the element.
<br> Together, lower and upper bounds produce a possibly empty half-interval of the array elements that are equal to k. To check whether k is present in the array it's enough to find its lower bound and check if the corresponding element equates to k.