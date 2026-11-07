/*
There is an integer array a[n] and an integer value d. The array is indexed from 1 to n.

Count the number of distinct triplets (i, j, k) such that 0 < i < j < k <= n and the sum (a[i] + a[j] + a[k]) is divisible by d.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
   int n;
   cin >> n;
   
   vector<ll> A(n);
   for(int i = 0; i < n; i++) {
    cin >> A[i];
   }

   ll d;
   cin >> d;

   ll counter = 0;

   // Stores frequencies of previous pair-sum remainders
   unordered_map<ll, ll> mp;

   for(int k = 0; k < n; k++) {

    // STEP 1: Consider A[k] as the THIRD element
    ll real = A[k] % d;

    // Find the remainder required from the previous pair
    ll r = d - real;
    r = r % d;

    // STEP 2: Check previously created pairs
    // These pairs can form valid triplets with A[k]
    counter += mp[r];

    // STEP 3: Create NEW pairs using A[k]
    // These pairs will be used in FUTURE iterations
    for(ll u = 0; u < k; u++) {
        // Calculate pair sum remainder
        ll sum = (A[u] + A[k]) % d;

        // Store frequency of this pair-sum remainder
        mp[sum]++;
    }
   }
   cout << counter << endl;
   return 0;
}

/*
## Time Complexity:

The total iterations: 0 + 1 + 2 + ... + (n - 1)

Using AP formula: n * (n - 1) / 2
= O(n ^ 2)

==> Time Complexity: O(n ^ 2) average


## Space Complexity: 

What is the maximum number of pairs inserted?
For each `k`, we insert `k` pairs.

Total pairs: 0 + 1 + 2 + 3 + ... + (n - 1) = n * (n - 1) / 2
Therefore, the map contains at most: O(n ^ 2) entries.
The input array occupies: O(n)
Total auxiliary space complexity is O(n^2).
*/