#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAXN = 20; // Maximum number of items or nodes

// dp[mask] stores the answer for the subset represented by mask
int dp[1 << MAXN];

// Function to solve using DP over bitmasks
int solve(int n, vector<vector<int>>& cost){
    memset(dp,INF,sizeof(dp)); // Initialize all do values to INF
    dp[0]=0;

    for(int mask = 0; mask < (1 << n); mask++){
        for(int u=0;u<n;u++){
            if(mask&(1<<u)) continue; // If u is already in the set, skip it
            int new_mask = mask | (1 << u);
            dp[new_mask] = min(dp[new_mask],dp[mask]+cost[u][_builtin_popcount(mask)]);
        }
    }

    return dp[(1<<n)-1]; // Answer for the full set
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> cost(n, vector<int>(n));
    
    // Input: cost matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    cout << solve(n, cost) << endl;
    return 0;
}