// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS traversal starting from vertex 0
vector<int> bfsTraversal(const vector<vector<int>>& adj) {
    vector<int> bfsResult;
    vector<bool> visited(adj.size(), false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfsResult.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return bfsResult;
}

int main() {
    // The input adjacency list representation of the graph
    vector<vector<int>> adj = {{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};

    vector<int> result = bfsTraversal(adj);

    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
