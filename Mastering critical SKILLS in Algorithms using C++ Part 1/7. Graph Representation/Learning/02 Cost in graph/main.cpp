#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> GRAPH;

void add_undirect_node(GRAPH &gr, int from, int to, int cost){
    gr[from][to] = gr[to][from] = cost;
}

void print_cost_gr(GRAPH gr){
    for (int i = 0; i < gr.size(); i++)
        for (int z = 0; z < gr.size(); z++)
            if (gr[i][z] != 0)
                cout << "Tu " << i << " den " << z << " ton " << gr[i][z] << " dong.\n";
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    GRAPH gr (node, vector<int>(node));
    while (edge--){
        int fr, to, cost; cin >> fr >> to >> cost;
        add_undirect_node(gr, fr, to, cost);
    }
    print_cost_gr(gr);
}
