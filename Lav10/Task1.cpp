#include <iostream>
#include <climits>
using namespace std;

#define V 4   // Number of vertices

// Function to find the vertex with minimum key value
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX;
    int minIndex;

    for (int v = 0; v < V; v++)
    {
        if (!mstSet[v] && key[v] < min)
        {
            min = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Function to print the MST
void printMST(int parent[], int graph[V][V])
{
    int totalWeight = 0;
    cout << "Edge \tWeight\n";

    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << "\t"
             << graph[i][parent[i]] << endl;
        totalWeight += graph[i][parent[i]];
    }

    cout << "\nTotal Weight of MST = " << totalWeight << endl;
}

// Prim's Algorithm
void primMST(int graph[V][V])
{
    int parent[V];   // Stores constructed MST
    int key[V];      // Minimum weight edge
    bool mstSet[V];  // Vertices included in MST

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    // Start from vertex 0
    key[0] = 0;
    parent[0] = -1;  // First node has no parent

    // MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        // Update key and parent of adjacent vertices
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] &&
                !mstSet[v] &&
                graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph);
}

// Main function
int main()
{
    int graph[V][V] = {
        {0, 1, 4, INT_MAX},
        {1, 0, 2, 6},
        {4, 2, 0, 3},
        {INT_MAX, 6, 3, 0}
    };

    primMST(graph);

    return 0;
}
