// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07
#include <iostream>
#include <vector>

using namespace std;

// Function to create an adjacency list from given vertices and edges
vector<vector<int>> createAdjacencyList(int V, int E, vector<vector<int>>& edges) {
    // Initialize the adjacency list with V empty vectors
    vector<vector<int>> adjList(V);

    // Iterate through each edge and populate the adjacency list
    for (const auto& edge : edges) {
        // Add edge from node1 to node2
        adjList[edge[0]].push_back(edge[1]);
        // Add edge from node2 to node1 (undirected graph)
        adjList[edge[1]].push_back(edge[0]);
    }
    return adjList; // Return the constructed adjacency list
}

int main() {
    int V = 6, E = 8; // Define number of vertices and edges
    // Define the edges of the graph
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {1, 2}, {1, 4}, {2, 5}, {3, 4}, {4, 5}, {5, 0}};

    // Create the adjacency list
    vector<vector<int>> adjList = createAdjacencyList(V, E, edges);

    // Print the adjacency list
    for (int i = 0; i < V; i++) {
        cout << i << ": "; // Print the current vertex
        for (int j : adjList[i]) {
            cout << j << " "; // Print each connected node
        }
        cout << endl; // New line for each vertex
    }
    return 0; // Indicate successful completion
}
