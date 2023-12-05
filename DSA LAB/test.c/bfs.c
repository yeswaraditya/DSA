#include <stdio.h> 
#define size 10
int queue[size], visited[size];
int front = -1, rear = -1;
struct Graph
{
    int adjMatrix[size][size];
};
int isempty()
{
    if (front == -1)
        return 1;
    return 0;
}
void enqueue(int x)
{
    if (front == -1)
        front = rear = 0;
    else
        rear++;
    queue[rear] = x;
}
int dequeue()
{
    int x = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return x;
}
void bfs(int v, int n, struct Graph *graph)
{
    enqueue(v);
    visited[v] = 1;
    while (!isempty())
    {
        v = dequeue();
        printf("%d ", v);
        for (int i = 0; i < n; i++)
        {
            if (graph->adjMatrix[v][i] == 1 && visited[i] != 1)
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}
void initGraph(struct Graph *graph, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph->adjMatrix[i][j] = 0;
        }
    }
}
void addEdge(struct Graph *graph, int src, int dest, int n)
{
    if (src >= 0 && src < n && dest >= 0 && dest < n)
    {
        graph->adjMatrix[src][dest] = 1;
        graph->adjMatrix[dest][src] = 1;
    }
}
void printGraph(struct Graph *graph, int n)
{
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
    for (int i = 0; i < n; i++)
    {
        queue[i] = 0;
        visited[i] = 0;
    }
    initGraph(&graph, n);
    printf("Enter the number of edges: ");
    scanf("%d", &Edges);
    for (int i = 0; i < Edges; i++)
    {
        int src, dest;
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        addEdge(&graph, src, dest, n);
    }
    printGraph(&graph, n);
    printf("Enter the starting vertex :");
    scanf("%d", &start);
    printf("BFS Traversal: ");
    bfs(start, n, &graph);
    return 0;
}