#include <stdio.h>
#define size 10
struct Graph
{
    int numVertices;
    int adjMatrix[size][size];
};
int visited[size];
void dfsRecursive(int v, struct Graph *graph)
{
    printf("%d ", v);
    visited[v] = 1;
    for (int i = 0; i < graph->numVertices; i++)
    {
        if (graph->adjMatrix[v][i] == 1 && visited[i] == 0)
        {
            dfsRecursive(i, graph);
        }
    }
}
void initGraph(struct Graph *graph, int numVertices)
{
    graph->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++)
    {
        for (int j = 0; j < numVertices; j++)
        {
            graph->adjMatrix[i][j] = 0;
        }
    }
}
void addEdge(struct Graph *graph, int src, int dest)
{
    if (src >= 0 && src < graph->numVertices && dest >= 0 && dest < graph->numVertices)
    {
        graph->adjMatrix[src][dest] = 1;
        graph->adjMatrix[dest][src] = 1;
    }
}
void printGraph(struct Graph *graph)
{
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < graph->numVertices; i++)
    {
        for (int j = 0; j < graph->numVertices; j++)
        {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    struct Graph graph;
    int n, Edges, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    initGraph(&graph, n);
    printf("Enter the number of edges: ");
    scanf("%d", &Edges);
    for (int i = 0; i < Edges; i++)
    {
        int src, dest;
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }
    printGraph(&graph);
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    printf("DFS Traversal: ");
    dfsRecursive(start, &graph);
    return 0;
}


