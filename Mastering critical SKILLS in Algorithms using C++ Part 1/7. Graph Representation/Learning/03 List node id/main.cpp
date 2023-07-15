#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_neighbor(GRAPH &gr, int id, int node_neighbor){
    gr[id].push_back(node_neighbor);
}

void print_gr(GRAPH gr){
    for (int i = 0; i < gr.size(); i++){
        cout << "ID " << i << ": ";
        for (int z = 0; z < gr[i].size(); z++)
            cout << gr[i][z] << " ";
        cout << "\n";
    }
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, cnt_nei; cin >> node >> cnt_nei;
    GRAPH gr (node);
    for (int i = 0; i < cnt_nei; i++)
    {
        int id, node; cin >> id >> node;
        add_neighbor(gr, id, node);
    }
    print_gr(gr);
}
