#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Function to perform Prim's algorithm to find MST
void primMST(vector<vector<int>>& graph, int V) {
    // Priority queue to store vertices with their key values
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Vector to store parent of each vertex in MST
    vector<int> parent(V, -1);

    // Vector to track if a vertex is included in MST
    vector<bool> inMST(V, false);

    // Vector to store key values of vertices
    vector<int> key(V, INT_MAX);

    // Start with vertex 0
    int src = 0;
    pq.push({0, src});
    key[src] = 0;

    // Main loop of Prim's algorithm
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;

        // Update key value and add adjacent vertices to pq
        for (int v = 0; v < V; ++v) {
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                pq.push({key[v], v});
                parent[v] = u;
            }
        }
    }

    // Print MST edges
    cout << "Edges of Minimum Spanning Tree:\n";
    for (int i = 1; i < V; ++i) {
        cout << parent[i] << " - " << i << " (" << graph[i][parent[i]] << ")\n";
    }
}

int main() {
    // Example graph representation (adjacency matrix)
    int V = 7;
    vector<vector<int>> graph = {
       {0,4,0,0,0,0,0,8,0},
 {4,0,8,0,0,0,0,11,0},
 {0,8,0,7,0,4,0,0,2},
 {0,0,7,0,9,14,0,0,0},
 {0,0,0,9,0,10,0,0,0},
 {0,0,4,14,10,0,2,0,0},
 {0,0,0,0,0,2,0,1,6},
 {8,11,0,0,0,0,1,0,7},
 {0,0,2,0,0,0,6,7,0}};
       


    // Find and print MST
    primMST(graph, V);

    return 0;
}
