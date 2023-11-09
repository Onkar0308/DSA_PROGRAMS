/*
Author Name=Onkar Anant Lambade
Date = 20/10/2023
Branch = I.T.
Roll No=32
Program =27
Description=Write a C program for Array Implementation of Graph with BFS traversal.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <queue>

#define MAX_VERTICES 100

// Graph structure
struct Graph {
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
};

// Initialize the graph
void initGraph(struct Graph *graph, int numVertices) {
    graph->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
}

// Add an edge to the graph
void addEdge(struct Graph *graph, int start, int end) {
    if (start >= 0 && start < graph->numVertices && end >= 0 && end < graph->numVertices) {
        graph->adjMatrix[start][end] = 1;
        graph->adjMatrix[end][start] = 1;  // For an undirected graph
    }
}

// Breadth-First Search (BFS) traversal
void bfs(struct Graph *graph, int startVertex) {
    bool visited[MAX_VERTICES] = {false};
    std::queue<int> queue;

    visited[startVertex] = true;
    printf("BFS traversal starting from vertex %d: ", startVertex);

    queue.push(startVertex);

    while (!queue.empty()) {
        int currentVertex = queue.front();
        queue.pop();
        printf("%d ", currentVertex);

        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->adjMatrix[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue.push(i);
            }
        }
    }
    printf("\n");
}

int main() {
    struct Graph graph;
    int numVertices = 6;
    initGraph(&graph, numVertices);

    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 2);
    addEdge(&graph, 1, 3);
    addEdge(&graph, 2, 4);
    addEdge(&graph, 3, 5);

    int startVertex = 0;
    bfs(&graph, startVertex);

    return 0;
}
