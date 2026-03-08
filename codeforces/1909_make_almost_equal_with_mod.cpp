// 1909-B Make Almost Equal With Mod
// https://codeforces.com/contest/1909/problem/B

/*
## Intution and Approach
You area given an array 'a'.
You must choose a number 'k' such that: a[i]%k produces exactly two different values among all elements.
In other words, after taking modulo 'k', the array should contain only 2 distinct remainders.
We must find such k.

Eg: a = [1,5,7,9], and if we choose k=4
then 
1%4=1
5%4=1
7%4=3
9%4=1
remainders -> {1,3} -> 2 distinct
So k=4 works.

### Why not 2??
If we choose k=2, then even numbers -> remainder 0
odd number -> remainder 1
So there are at most 2 remainders.

But the problem wants exactly 2 remainders.
That means: array must contain both even and odd

If all numbers are even: [2,4,6] then a[i]%2 -> 0, then in this case only 1 remainder, which is not valid.
Same with array consisting of all odd numbers also give 1, that is also not valid.

*/