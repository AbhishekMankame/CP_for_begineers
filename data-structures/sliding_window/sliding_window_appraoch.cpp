// Sliding window approach - O(n) Time and O(1) Space

/*
- We compute the sum of the first k elements out of n terms using a linear loop and store the sum in variable window sum.
- Then we will traverse linearly over the array till it reaches the end and simultaeously keep track of the maximum sum.
- To get the current sum of a block of k elements just subtract the first element from the previous block and add the last element of the current block.

*/