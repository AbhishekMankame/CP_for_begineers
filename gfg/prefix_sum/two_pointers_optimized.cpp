// Two pointers optimized approach
/*
We take two pointers, one representing the first element and other representing the last element of the array, and then we add the values kept at both the pointers.
If their sum is smaller than X then we shift the left pointer to right or if their sum is greater than X then then we shift right pointer to left, in order to get closer to the sum.
We keep moving the pointers until we get the sum as X.
*/