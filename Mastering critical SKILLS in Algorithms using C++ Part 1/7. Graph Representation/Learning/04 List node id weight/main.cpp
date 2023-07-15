#include <iostream>
#include <vector>
using namespace std;

struct NODE{
    int to;
    int cost;

    NODE(int _to, int _cost){
        to = _to;
        cost = _cost;
    }
};

typedef vector<vector<NODE>> GRAPH;

void create_directed_edge(GRAPH &gr, int from, int to, int cost){
    NODE d (to, cost);
    gr[from].push_back(d);
}

void create_undirected_edge(GRAPH &gr, int from, int to, int cost){
    NODE d1 (to, cost);
    gr[from].push_back(d1);
    NODE d2 (from, cost);
    gr[to].push_back(d2);
}

void print(GRAPH gr){
    for (int i = 0; i < gr.size(); i++){
        cout << "ID " << i << ": ";
        for (int z = 0; z < gr[i].size(); z++)
            cout << gr[i][z].to << "(" << gr[i][z].cost << ") ";
        cout << "\n";
    }
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, egde; cin >> node >> egde;
    GRAPH gr (node);
    for (int i = 0; i < egde; i++){
        int from, to, cost; cin >> from >> to >> cost;
        create_directed_edge(gr, from, to, cost);
    }
    print(gr);
}
