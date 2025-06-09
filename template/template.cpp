// कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।

#include<bits/stdc++.h> // includes all standard libraries
using namespace std;

// Type aliases for convenience
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Macros for shorthand
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

// Debugging (can comment out in constents)
#define debug(x) cerr << #x << ": " << x << endl;

// Constants
const int MOD = 1e9 + 7; // Modulo value for large numbers
const int INF = 1e9; // Infinity value for comparisons or (can be set to higher values)
const int MAXN = 2e5 + 5; // Maximum size for arrays or vectors

int gcd(int a, int b){
    if(b==0) {
        return a;
    }
    else {
        gcd(b, a%b);
    }
}
int lcm(int a, int b) {
    return (a*b) / gcd(a,b);
}

int isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i * i <= n; i = i + 5) {
        if(n%i==0 || n%(i+2) == 0) {
            return false;
        }
    }

    return true;
}

// Solve function (where main logic goes) 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a) cin >> x;

    // Example logic: print array in reverse
    reverse(all(a));
    for (int x : a) cout << x << " ";
    cout << "\n";
}

// Main function
int main() {
    fast_io; // Fast input/output
    int t = 1;
    // Uncomment below if multiple test cases are needed
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}