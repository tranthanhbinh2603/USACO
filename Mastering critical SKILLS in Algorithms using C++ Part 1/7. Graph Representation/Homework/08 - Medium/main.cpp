#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_adge(GRAPH &gr, int fr, int to){
    gr[fr].push_back(to);
}

void print(GRAPH &gr){
    for (int i = 0; i < gr.size(); i++){
        if (gr[i].size() > 0){
            for (int z = 0; z < gr[i].size(); z++)
                if (gr[gr[i][z]].size() > 0)
                    for (int k = 0; k < gr[gr[i][z]].size(); k++)
                        cout << i << " " << gr[i][z] << " " << gr[gr[i][z]][k] << "\n";
        }
    }
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    GRAPH gr (node);
    for (int i = 0; i < edge; i++)
    {
        int fr, to; cin >> fr >> to;
        add_adge(gr, fr, to);
    }
    print(gr);
}
