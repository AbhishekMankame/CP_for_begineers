// A. Simons and Making it beautiful
// https://codeforces.com/contest/2205/problem/A

/*
Intution First: i=max(p1,p2,..,pi)
That means: The maximum value seen so far in the prefix is exactly equal to the position.

The maximum number of ugly indices happens when the permutation is: [1,2,3,4,...,n]
Every index is ugly.
So ugly indices happen when the permutation behaves "too sorted" in prefix.
To reduce ugly indices, we want to:
- Break prefix structure
- Delay small numbers from forming clean prefixes

## Powerful insight
If we swap the first element and the largest element(n):
- We immediately break all early prefixes.
- Because now the first prefix is already contains 'n', so the max becomes 'n' very early.
- So for all i<n, max(prefix)!=i.
This kills almost all ugly indices.

## Best stratergy:
For each test case:
1. If n=1: Just print it (only one possible answer).
2. Otherwise:
    - Find position of 'n'
    - Swap p[1] and p[pos_of_n]
That's it...
This guarantees:
    - Atmost one ugly index remains (usually at position n)
    - And that's optimal

## Why does this work?
After swapping:
- 'n' is at position 1
- So for every i<n, the prefix maximum is already 'n'
- So it can never equal 'i'
- So no ugly index before 'n'
Only possible index 'n' can remain ugly - which is unavoidable.

## Complexity:
For each test case:
- Find 'n' -> O(n)
- One swap -> O(1)
Total: O(n) per test case with n<=500, this is trivial
*/