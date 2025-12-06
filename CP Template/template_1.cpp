// ----------------------------------------------------------------
// Competitive Programming Templace (Begineer-Friendly)
// With explanations for each part
// ----------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

// -----------------------------------------------------------------
// Aliases (shortcuts)
// -----------------------------------------------------------------
#define ll long long       // 64-bit integer
#define all(x) (x).begin(), (x).end()   // shorthand for sorting
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
// fast input/output (very important in CP)

// Compute gcd(a, b) using Euclid's algorithm
ll gcd(ll a, ll b){
    return (b==0?a:gcd(b,a%b));
}

// Least common multiple using gcd
ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

// Fast exponentiation with modulo: a^b%mod
// O(log b) time - used often in number theory, combinatorics
ll binpow(ll a, ll b, ll mod){
    ll res=1%mod;   // handle mod==1 case
    while(b>0){
        if(b&1)     // if current bit is 1
            res = (res*a)%mod;
        a=(a*a)%mod; //square the base
        b>>=1;  // divide exponent by 2
    }

    return res;
}