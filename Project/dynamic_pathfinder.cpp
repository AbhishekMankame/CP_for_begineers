// Dynamic Graph Pathfinding Visualizer - Core Backend (C++)
// Supports real-time graph updates and shortest path calculations
// Algorithms: Dijkstra and A* (basic setup)

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <limits>
#include <cmath>

using namespace std;

struct Edge
{
    int to;
    double weight;
};

struct Node
{
    int id;
    double x, y; // for heuristic (A*)
    vector<Edge> neighbors;
};

class Graph
{
private:
    unordered_map<int, Node> nodes;

public:
    void addNode(int id, double x = 0, double y = 0)
    {
        nodes[id] = Node{id, x, y, {}};
    }

    void addEdge(int from, int to, double weight)
    {
        nodes[from].neighbors.push_back({to, weight});
        nodes[to].neighbors.push_back({from, weight}); // undirected
    }

    void removeEdge(int from, int to)
    {
        auto &edgesFrom = nodes[from].neighbors;
        edgesFrom.erase(remove_if(edgesFrom.begin(), edgesFrom.end(), [&](Edge e)
                                  { return e.to == to; }),
                        edgesFrom.end());

        auto &edgesTo = nodes[to].neighbors;
        edgesTo.erase(remove_if(edgesTo.begin(), edgesTo.end(), [&](Edge e)
                                { return e.to == from; }),
                      edgesTo.end());
    }

    double heuristic(int a, int b)
    {
        double dx = nodes[a].x - nodes[b].x;
        double dy = nodes[a].y - nodes[b].y;
        return sqrt(dx * dx + dy * dy);
    }

    vector<int> dijkstra(int start, int goal)
    {
        unordered_map<int, double> dist;
        unordered_map<int, int> prev;
        for (auto &[id, _] : nodes)
            dist[id] = numeric_limits<double>::infinity();
        dist[start] = 0;

        using P = pair<double, int>; // (distance, node)
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, start});

        while (!pq.empty())
        {
            auto [d, u] = pq.top();
            pq.pop();
            if (u == goal)
                break;

            for (auto &edge : nodes[u].neighbors)
            {
                int v = edge.to;
                double alt = dist[u] + edge.weight;
                if (alt < dist[v])
                {
                    dist[v] = alt;
                    prev[v] = u;
                    pq.push({alt, v});
                }
            }
        }

        vector<int> path;
        for (int at = goal; at != start; at = prev[at])
        {
            path.push_back(at);
            if (prev.find(at) == prev.end())
                return {}; // no path
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
        return path;
    }
};

// Sample Usage
int main()
{
    Graph g;
    g.addNode(1, 0, 0);
    g.addNode(2, 1, 1);
    g.addNode(3, 2, 2);
    g.addNode(4, 1, 0);

    g.addEdge(1, 2, 1.5);
    g.addEdge(2, 3, 1.5);
    g.addEdge(1, 4, 1);
    g.addEdge(4, 3, 1);

    auto path = g.dijkstra(1, 3);
    cout << "Shortest path from 1 to 3: ";
    for (int node : path)
        cout << node << " ";
    cout << endl;

    return 0;
}
