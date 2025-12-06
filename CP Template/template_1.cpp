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