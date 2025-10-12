// Depth First Search (DFS):
// Explore as far as possible down one branch before backtracking.
// DFS can be implemented using recursion or a stack.

// Using recursion

#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited){
    visited[node] = true;
    cout << node << " ";

    for(int neighbor : graph[node]){
        if(!visited[neighbor]){
            dfs(neighbour,graph,visited);
        }
    }
}

int main() {
    int n = 5;
    vector<vector<int>> graph(n);

    // Edges (undirected)
    graph[0].push_back(1);
    graph[1].push_back(0);
    graph[0].push_back(2);
    graph[2].push_back(0);
    graph[1].push_back(3);
    graph[3].push_back(1);
    graph[2].push_back(4);
    graph[4].push_back(2);

    vector<bool> visited(n,false);
    cout<<"DFS starting from node 0: ";
    dfs(0,graph,visited);
    cout<<"\n";

    return 0;
}