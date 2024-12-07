// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07

#include <iostream>
#include <vector>

using namespace std;

// Utility function for DFS traversal
void dfsUtil(int node, vector<bool>& visited, vector<int>& dfsResult, const vector<vector<int>>& adj) {
    visited[node] = true; // Mark the current node as visited
    dfsResult.push_back(node); // Add the current node to the result
    
    // Visit all the neighbors of the current node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) { // If the neighbor hasn't been visited
            dfsUtil(neighbor, visited, dfsResult, adj); // Recur for the neighbor
        }
    }
}

// Function to perform DFS traversal starting from vertex 0
vector<int> dfsTraversal(const vector<vector<int>>& adj) {
    vector<int> dfsResult; // To store the DFS traversal result
    vector<bool> visited(adj.size(), false); // Track visited vertices

    // Start DFS from vertex 0
    dfsUtil(0, visited, dfsResult, adj); // Call the utility function
    return dfsResult; // Return the DFS traversal result
}

int main() {
    // The input adjacency list representation of the graph
    vector<vector<int>> adj = {{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};

    // Perform DFS traversal and store the result
    vector<int> result = dfsTraversal(adj);

    // Print the DFS traversal result
    for (int node : result) {
        cout << node << " "; // Print each visited node
    }
    cout << endl; 
    return 0; // Indicate successful completion
}
