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