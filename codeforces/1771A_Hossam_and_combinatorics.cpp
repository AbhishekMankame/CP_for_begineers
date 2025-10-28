// 1771 - A --> Hossam and Combinatorics
// Time limit per test: 2 seconds, Memory limit per test: 256 megabytes

/*
Hossam woke up bored, so he decided to create an interesting array with his friend Hazem.

Now,they have an array 'a' of 'n' positive integers. Hossam will choose a number ai and Hazem will choose a number aj.

Count the number of interesting pairs (ai, aj) that meet all the following conditions:
    - 1 <= i, j <= n,
    - i != j
    - The absolute difference |ai - aj| must be equal to the maximum absolute difference over all the pairs in the array. More formally, |ai - aj| = max(1<=p,q<=n)|ap - aq|.

Input: The input consists of multiple test cases. The first line contains a single integer t(1<=t<=100), which denotes the number of test cases. Description of the test cases follows:
The first line of each test case contains an integer n(2<=n<=10^5)
The second line of test case contains n integers a1, a2, ... ,an (1<=ai<=10^5)
It is guaranteed that the sum of n over all test cases does not exceed 10^5


Output: For each test case print an integer - the number of interesting pairs (ai, aj)

Example:
Input:
2
5
6 2 3 8 1
6
7 2 8 3 2 10

Output:
2
4




*/