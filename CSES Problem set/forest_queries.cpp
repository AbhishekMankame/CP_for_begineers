// CSES - Forest Queries
// https://cses.fi/problemset/task/1652

/*
You are given an 'n*n' grid representing the map of a forest. Each square is either empty or contains a tree. The upper-left square has coordinates (1,1), and the lower-right square has coordinates (n,n).
Your task is to process 'q' queries of the form: how many trees are inside a given rectangle in the forest?

Input:
The first input line has two integers 'n' and 'q': the size of the forest and the number of queries.
Then, there are n lines describing the forest. Each line has 'n' characters: '.' is an empty square and '*' is a tree.
Finally, there are 'q' lines describing the queries. Each line has four integers 'y1','x1','y2','x2' corresponding to the corners of a rectangle.

Output:
Print the number of trees inside each rectangle.

Constraints:
- 1 <= n <= 1000
- 1 <= q <= 2*10^5
- 1 <= y1 <= y2 <= n
- 1 <= x1 <= x2 <= n

Example:
Input:
4 3
.*..
*.**
**..
****
2 2 3 4
3 1 3 1
1 1 2 2

Output:
3
1
2

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }

    // Prefix sum array
    vector<vector<int>> ps(n+1,vector<int>(n+1,0));

    // Build 2D prefix sums
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ps[i][j] = ps[i][j-1] + ps[i-1][j] - ps[i-1][j-1] + (grid[i-1][j-1]=='*'?1:0);
        }
    }

    while(q--){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;

        int ans = ps[y2][x2] - ps[y1-1][x2] - ps[y2][x1-1] + ps[y1-1][x1-1];
        cout<<ans<<"\n";
    }
    return 0;
}