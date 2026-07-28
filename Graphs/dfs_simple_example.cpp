// Simple DFS Example

#include<iostream>
#include<vector>
using namespace std;

// Recursive DFS function
void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] = true;   // Mark the current node as visited

    // process node: print current node
    cout << node << " ";    // Process node: here, simply print it

    for(int nbr:adj[node]){ // Iterate through all neighbors of 'node'
        if(!visited[nbr]){  // If neighbour is not visited
            dfs(ndr, adj, visited); // Recursively call DFS on neighbor
        }
    }
}

int main() {
    int n,e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<int>> adj(n); // Adjacency list to represent the graph
    cout << "Enter edges (u v):" << endl;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        // Assuming undirected graph
        adj[u].push_back(u);    // Add edge u->v
        adj[v].push_back(v);    // Add edge v->u (undirected graph)
    }

    vector<bool> visited(n, false); // Track visited nodes
    cout << "DFS traversal starting from node 0:" << endl;
    dfs(0, adj, visited);   // Start DFS from node 0
    cout << endl;
    return 0;
}

/*

| Aspect                  | Complexity |
| ----------------------- | ---------- |
| Time                    | O(V + E)   |
| Space (visited)         | O(V)       |
| Space (recursion stack) | O(V)       |
| Space (adjacency list)  | O(V + E)   |

*/