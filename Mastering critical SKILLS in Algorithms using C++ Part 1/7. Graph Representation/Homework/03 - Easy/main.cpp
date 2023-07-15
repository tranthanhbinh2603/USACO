#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<vector<int>>> GRAPH;

void add_directed_egde(GRAPH &gr, int from, int to, int weight){
    gr[from][to].push_back(weight);
}

void print(GRAPH gr){
    for (int i = 0; i < gr.size(); i++)
    for (int z = 0; z < gr.size(); z++)
    if (gr[i][z].size() > 0){
        for (auto k : gr[i][z])
            cout << "From " << i << " to " << z << " the cost is " << k << "\n";
    }
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    GRAPH gr (node, vector<vector<int>>(node));
    while (edge--){
        int from, to, cost;
        cin >> from >> to >> cost;
        add_directed_egde(gr, from, to, cost);
    }
    print(gr);
}
