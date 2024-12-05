To adapt the content into the Homework 3 file format based on the style you provided earlier, here’s a clear and structured version for your Homework 3:

---

# Homework 3 - Data Structures

**Author**: Nelda 1123564  
**Submission Deadline**: 12-Dec-2024  

## Table of Contents
- [Question 1: Adjacency List of a Graph](#question-1-adjacency-list-of-a-graph)
- [Question 2: Breadth-First Traversal of a Graph](#question-2-breadth-first-traversal-of-a-graph)
- [Question 3: Depth-First Traversal of a Graph](#question-3-depth-first-traversal-of-a-graph)
- [Question 4: Minimum Spanning Tree Using Weighted Graph](#question-4-minimum-spanning-tree-using-weighted-graph)

---

## Question 1: Adjacency List of a Graph
**Problem Statement**:  
Given an undirected graph with V nodes and E edges, create and return an adjacency list representation of the graph.  

**Input**:  
- `V` (number of nodes)  
- `E` (number of edges)  
- `edges` (a list of edge pairs, where each pair `[u, v]` represents an undirected edge between nodes `u` and `v`).  

**Output**:  
An adjacency list of the graph.  

**Example**:  
**Input**:  
```
V = 5, E = 7  
edges = [[0,1], [0,4], [4,1], [4,3], [1,3], [1,2], [3,2]]
```  
**Output**:  
```
[[1,4], [0,2,3,4], [1,3], [1,2,4], [0,1,3]]
```

---

## Question 2: Breadth-First Traversal of a Graph
**Problem Statement**:  
Given a connected, undirected graph represented by an adjacency list, perform a **Breadth-First Traversal (BFS)** starting from vertex 0. Return the BFS traversal of the graph.  

**Input**:  
- An adjacency list where each index represents a node and contains a list of nodes connected to it.  

**Output**:  
A list containing the BFS traversal order.  

**Example**:  
**Input**:  
```
adj = [[2,3,1], [0], [0,4], [0], [2]]
```  
**Output**:  
```
[0, 2, 3, 1, 4]
```  
**Explanation**:  
Starting from node 0:  
1. Visit 0 → Output: `[0]`  
2. Visit 2 → Output: `[0, 2]`  
3. Visit 3 → Output: `[0, 2, 3]`  
4. Visit 1 → Output: `[0, 2, 3, 1]`  
5. Visit 4 → Output: `[0, 2, 3, 1, 4]`  

---

## Question 3: Depth-First Traversal of a Graph
**Problem Statement**:  
Given a connected, undirected graph represented by an adjacency list, perform a **Depth-First Traversal (DFS)** starting from vertex 0. Return the DFS traversal of the graph.  

**Input**:  
- An adjacency list where each index represents a node and contains a list of nodes connected to it.  

**Output**:  
A list containing the DFS traversal order.  

**Example**:  
**Input**:  
```
adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]
```  
**Output**:  
```
[0, 1, 2, 3, 4]
```  
**Explanation**:  
Starting from node 0:  
1. Visit 0 → Output: `[0]`  
2. Visit 1 → Output: `[0, 1]`  
3. Visit 2 → Output: `[0, 1, 2]`  
4. Visit 3 → Output: `[0, 1, 2, 3]`  
5. Visit 4 → Output: `[0, 1, 2, 3, 4]`  

---

## Question 4: Minimum Spanning Tree Using Weighted Graph
**Problem Statement**:  
Given a weighted, undirected, and connected graph with V vertices and E edges, find the sum of the weights of the edges in the Minimum Spanning Tree (MST).  

**Input**:  
- `V` (number of vertices)  
- `E` (number of edges)  
- Adjacency list representation of the graph, where each edge is represented as a pair `[node, weight]`.  

**Output**:  
The total weight of the MST.  

**Example**:  
**Input**:  
```
V = 3, E = 3  
Edges: [[0, 1, 5], [1, 2, 3], [0, 2, 1]]
```  
**Output**:  
```
4
```  
**Explanation**:  
The MST consists of the edges `(0, 2)` with weight 1 and `(1, 2)` with weight 3. The total weight is `4`.  

---


Would you like me to further format or enhance this?
