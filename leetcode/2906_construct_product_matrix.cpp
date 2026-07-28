// https://leetcode.com/problems/construct-product-matrix/description/

// Leetcode 2906 - Construct Product Matrix

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int mod = 12345;

        int m = grid.size();
        int n = grid[0].size();

        int size = m*n;

        // Result array (stores prefix first, then final answer)
        vector<int> res(size,1);

        // Step 1: Flatten the 2D grid into 1D array
        vector<int> arr;
        for(auto &row:grid){
            for(int x:row){
                arr.push_back(x);
            }
        }

        // Step 2: Build prefix product
        // res[i] = product of all elements before index i
        for(int i=1;i<size;i++){
            res[i] = (1LL*res[i-1]*arr[i-1])%mod;
        }

        // Step 3: Traverse from right to left and maintain suffix product
        // Multiply suffix with prefix stored in res
        long long suffix = 1;
        for(int i=size-1;i>=0;i--){
            res[i] = (1LL*res[i]*suffix)%mod;
            suffix = (1LL*suffix*arr[i])%mod;
        }

        // Step 4: Convert 1D result back to 2D matrix
        vector<vector<int>> ans(m,vector<int>(n));
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=res[idx++];
            }
        }
        return ans;
    }
}

/*
Quick Recap
- Flatten 2D grid -> treat as 1D array
- Prefix pass -> store "left product"
- Suffix pass -> multiply "right product"
- Avoid division (handles zero safely)
- Use 1LL during multiplication to prevent integer overflow
- Take modulo (12345) at every step
- Reshape 1D result back to 2D grid

*/

/*
Complexity details:

Time Complexity:
Let m = number of rows, n = number of columns
- Total elements = k = m*n

Breakdown:
- Flatten grid -> O(m*n)
- Prefix pass -> O(m*n)
- Suffix pass -> O(m*n)
- Reconstruction grid -> O(m*n)

Final Time Complexity = O(m*n)

Space Complexity:
Extra space used:
- arr (flattened array) -> O(m*n)
- res (result array) -> O(m*n)
- ans (output matrix) -> O(m*n)

Final Space Complexity = O(m*n)

*/