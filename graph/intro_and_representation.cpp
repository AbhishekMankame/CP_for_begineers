/*
Graph
- A graph is a collection of nodes (called vertices) connected by edges.
- Eg. Social networks (people are nodes, friendships are edges).

Graphs can be:
- Unidirected: Edges have no direction (friendship is mutual).
- Directed: Edges have direction (like Twitter follow)

*/

// Representation of a graph
// A simple way is adjacency list, which stores for each node the list of nodes connected to it.

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 5; // number of nodes (0 to 4)

    // Create adjacency list
    vector<vector<int>> graph(n);

    // Add edges (undirected)
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(2);
    graph[2].push_back(0);

    graph[1].push_back(3);
    graph[3].push_back(1);

    graph[2].push_back(4);
    graph[4].push_back(2);

    // Print adjacency list
    for(int i=0;i<n;i++){
        cout << i << ": ";
        for(int node : graph[i]){
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}