// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struct to represent an edge in the graph
// Each edge has a source vertex (u), a destination vertex (v), and a weight
struct Edge {
    int u, v, weight;
};

// Comparison function to sort edges based on weight
// Used to sort the edges in ascending order of their weights
bool compareEdges(const Edge& e1, const Edge& e2) {
    return e1.weight < e2.weight;
}

// Function to find the root of a node in the Union-Find data structure
// This is used to keep track of the connected components in the graph
int findRoot(vector<int>& parent, int u) {
    // Recursively find the root of the node by
    // following the parent pointers until we reach the root
    if (parent[u] != u) {
        parent[u] = findRoot(parent, parent[u]);
    }
    return parent[u];
}

// Function to find the sum of the weights of the edges in the MST
int findMSTWeightSum(const vector<vector<int>>& adj) {
    vector<Edge> edges;  // Store all the edges in the graph
    vector<int> parent(adj.size());  // Keep track of the connected components

    // Create the list of edges and initialize the parent vector
    // We iterate through the adjacency list and add each edge to the edges vector
    // We also initialize the parent vector, where each node is initially its own parent
    for (int u = 0; u < adj.size(); u++) {
        parent[u] = u;
        for (int i = 0; i < adj[u].size(); i += 2) {
            int v = adj[u][i];
            int weight = adj[u][i + 1];
            edges.push_back({u, v, weight});
        }
    }

    // Sort the edges in ascending order of weight
    // This is necessary for Kruskal's algorithm
    sort(edges.begin(), edges.end(), compareEdges);

    int totalWeight = 0;  // Initialize the total weight of the MST to 0
    int numEdges = 0;  // Keep track of the number of edges added to the MST

    // Perform Kruskal's algorithm to find the MST
    for (const auto& edge : edges) {
        int rootU = findRoot(parent, edge.u);
        int rootV = findRoot(parent, edge.v);
        if (rootU != rootV) {
            // The edge does not create a cycle, so add it to the MST
            parent[rootU] = rootV;
            totalWeight += edge.weight;
            numEdges++;
            if (numEdges == adj.size() - 1) {
                // We have found all the edges in the MST
                break;
            }
        }
    }

    return totalWeight;
}

int main() {
    // Define the input graph as an adjacency list
    // Each row represents the edges connected to a vertex
    // The first number is the destination vertex, and the second number is the weight
    vector<vector<int>> adj = {
        {1, 5, 2, 1},
        {0, 5, 2, 3, 3, 1},
        {0, 1, 1, 3}
    };

    // Find the sum of the weights of the edges in the MST and print the result
    int totalWeight = findMSTWeightSum(adj);
    cout << "Sum of the weights of the edges in the MST: " << totalWeight << endl;

    return 0;
}
