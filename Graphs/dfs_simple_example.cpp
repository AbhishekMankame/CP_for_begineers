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

int main() {
    int n,e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<int>> adj(n);
    cout << "Enter edges (u v):" << endl;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        // Assuming undirected graph
        adj[u].push_back(u);
        adj[v].push_back(v);
    }

    vector<bool> visited(n, false);
    cout << "DFS traversal starting from node 0:" << endl;
    dfs(0, adj, visited);
    cout << endl;
    return 0;
}