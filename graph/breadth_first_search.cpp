// Breadth First Search (BFS):
// Explore all neighbors at the current depth before moving deeper.

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(int start, vector<vector<int>>& graph){
    int n = graph.size();
    vector<bool> visited(n,false);
    queue<int> q;
    visited[start]=true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbor:graph[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n=5;
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

    cout << "BFS starting from node 0: ";
    bfs(0, graph);
    cout<<endl;

    return 0;
}