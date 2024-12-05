// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS traversal starting from vertex 0
vector<int> bfsTraversal(const vector<vector<int>>& adj) {
    vector<int> bfsResult; // To store the BFS traversal result
    vector<bool> visited(adj.size(), false); // Track visited vertices
    queue<int> q; // Queue for BFS

    // Start BFS from vertex 0
    q.push(0); // Enqueue the starting vertex
    visited[0] = true; // Mark it as visited

    // Continue until the queue is empty
    while (!q.empty()) {
        int node = q.front(); // Get the front node
        q.pop(); // Remove it from the queue
        bfsResult.push_back(node); // Add it to the result

        // Visit all the neighbors of the current node
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) { // If the neighbor hasn't been visited
                visited[neighbor] = true; // Mark it as visited
                q.push(neighbor); // Enqueue the neighbor
            }
        }
    }
    return bfsResult; // Return the BFS traversal result
}

int main() {
    // The input adjacency list representation of the graph
    vector<vector<int>> adj = {{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};

    // Perform BFS traversal and store the result
    vector<int> result = bfsTraversal(adj);

    // Print the BFS traversal result
    for (int node : result) {
        cout << node << " "; // Print each visited node
    }
    cout << endl; // New line after printing all nodes
    return 0; // Indicate successful completion
}
