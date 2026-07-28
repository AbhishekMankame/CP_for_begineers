// 236 C --> LCM Challenge
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes

/*
Some days ago, I learned the concept of LCM (least common multiple). I've played with it for several times and I want to make a big number with it.

But I also don't want to use many numbers, so I'll choosed three positive integers (they don't have to be distinct) which are not greater than n. Can you help me to find the maximum possible least common multiple of these three integers?

Input:
The first line contains an integer n (1<=n<=10^6) - the n mentioned in the statement.

Output:
Print a single integer - the maximum possible LCM of three not necessarily distinct positive integers that are not greater than n.

Example:
Input: 9    Output: 504
Input: 7    Output: 210

Note:
The least common multiple of some positive integers is the least positive integer which is multiple of each of them.
The result may become very large, 32-bit integers won't be enough. So using 64-bit integers is recommended.
For the last example, we can chose numbers 7,6,5 and the LCM of them is 7.6.5 = 210. It is the maximum value we can get.

Problem tags: greedy, number theory, *1600

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    while(b) {
        ll temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a/gcd(a,b))*b;
}

ll lcm3(ll a, ll b, ll c){
    return lcm(lcm(a,b),c);
}

int main() {
    ll n;
    cin >> n;
    if(n<=2){
        cout << n << endl;
        return 0;
    }

    if(n==3) {
        cout << 6 << endl;
        return 0;
    }

    ll ans = 0;

    // For small n, just try top 3 numbers (n, n-1, n-2) and (n-1, n-2, n-3)

    for(ll i=n;i>=max(1LL,n-4);--i){
        for(ll j=i;j>=max(1LL,n-4);--j){
            for(ll k=j;k>=max(1LL,n-4);--k){
                ans = max(ans,lcm(i,j,k));
            }
        }
    }

    cout << ans << endl;
    return 0;
}

/*
Time Complexity:

Step 1: How many iterations?
- i runs from n down to max(1,n-4). That's at most 5 values.
- j runs from i down to max(1,n-4). That's at most 5 values.
- k runs from j down to max(1,n-4). That's at most 5 values.

So the total numbers of triplets checked:
    Total iterations <= 5*5*5 = 125
That's extremely small, independent of n. Even for n = 10^6, we only do 125 iterations.

Step 2: Complexity of lcm and gcd
- gcd(a,b) uses Euclid's algorithm, which takes O(log(min(a,b))) time.
- lcm(a,b) just does (a/gcd(a,b))*b --> dominated by the gcd call.
- lcm(a,b,c) calls lcm(a,b) and then lcm(result,c) -> 2 gcd computations.
Since the numbers are <= 10^6, each gcd call is at most:
    O(log 10^6) = O(20)

Step 3: Total Time Complexity
- Number of iterations: <= 125
- Work per iteration: 2 gcd calls -> 2 * O(log n)
- Total complexity: O(125*2*log n) = O(log n)
In practical terms, the code runs in constant time for all n <= 10^6 because 125 is tiny.

Step 4: Space Complexity:
- We only store a few integers (n,i,j,k,ans)
- No arrays or dynamic memory.
    Space complexity = O(1)
Constant space

Step 5: Why we don't check all triplets
- A naive approach would check all triplets (a,b,c) from 1 to n --> O(n^3), impossible for n = 10^6
- Our observation: the maximum LCM always involves numbers very close to n, so we only need top 5 numbers.
- This reduces complexity from O(n^3) --> effectively O(1)

*/