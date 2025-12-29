#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

int findParent(int parent[], int i) {
    if (parent[i] == i)
        return i;
    return findParent(parent, parent[i]);
}

void unionSet(int parent[], int x, int y) {
    parent[x] = y;
}

int main() {
    Edge edges[] = {
        {0,1,1},
        {1,2,2},
        {2,3,3},
        {0,2,4},
        {1,3,6}
    };

    int E = 5, V = 4;
    sort(edges, edges + E, [](Edge a, Edge b) {
        return a.w < b.w;
    });

    int parent[V];
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int totalWeight = 0;
    cout << "Kruskal's MST:\n";

    for (int i = 0; i < E; i++) {
        int x = findParent(parent, edges[i].u);
        int y = findParent(parent, edges[i].v);

        if (x != y) {
            cout << edges[i].u << " - " << edges[i].v 
                 << " : " << edges[i].w << endl;
            totalWeight += edges[i].w;
            unionSet(parent, x, y);
        }
    }

    cout << "Total Weight = " << totalWeight << endl;
    return 0;
}