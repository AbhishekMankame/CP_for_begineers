// Simple DFS Example

#include<iostream>
#include<vector>
using namespace std;

// Recursive DFS function
void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] = true;

    // process node: print current node
    cout << node << " ";

    for(int nbr:adj[node]){
        if(!visited[nbr]){
            dfs(ndr, adj, visited);
        }
    }
}