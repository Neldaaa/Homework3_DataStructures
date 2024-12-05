// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07
#include <iostream>
#include <vector>

using namespace std;

// Utility function for DFS traversal
void dfsUtil(int node, vector<bool>& visited, vector<int>& dfsResult, const vector<vector<int>>& adj) {
    visited[node] = true;
    dfsResult.push_back(node);

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, visited, dfsResult, adj);
        }
    }
}

// Function to perform DFS traversal starting from vertex 0
vector<int> dfsTraversal(const vector<vector<int>>& adj) {
    vector<int> dfsResult;
    vector<bool> visited(adj.size(), false);
    dfsUtil(0, visited, dfsResult, adj);
    return dfsResult;
}

int main() {
    // The input adjacency list representation of the graph
    vector<vector<int>> adj = {{1, 3}, {0, 2}, {1, 5}, {0, 4}, {3}, {2}};
    
    vector<int> result = dfsTraversal(adj);

    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
