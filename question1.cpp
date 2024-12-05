// Name: Nelda
// Student ID: 1123564
// Date of Submission: 2024/12/07
#include <iostream>
#include <vector>

using namespace std;

// Function to create an adjacency list from given vertices and edges
vector<vector<int>> createAdjacencyList(int V, int E, vector<vector<int>>& edges) {
    vector<vector<int>> adjList(V);
    for (const auto& edge : edges) {
        adjList[edge[0]].push_back(edge[1]);
        adjList[edge[1]].push_back(edge[0]);
    }
    return adjList;
}

int main() {
    int V = 6, E = 8; // 6 vertices and 8 edges
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {1, 2}, {1, 4}, {2, 5}, {3, 4}, {4, 5}, {5, 0}};

    vector<vector<int>> adjList = createAdjacencyList(V, E, edges);

    for (int i = 0; i < V; i++) {
        cout << i << ": ";
        for (int j : adjList[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
