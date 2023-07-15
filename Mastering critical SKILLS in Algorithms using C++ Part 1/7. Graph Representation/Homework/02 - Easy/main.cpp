#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

typedef vector<unordered_set<int>> GRAPH;

void add_egde(GRAPH &gr, int from, int to){
    gr[from].insert(to);
}

void find_egde(GRAPH gr, int from, int to){
    if (gr[from].find(to) != gr[from].end())
        cout << "Is find edge from " << from << " to " << to << "\n";
}

void print(GRAPH gr){
    int sz = gr.size();
    for (int i = 0; i < sz; i++)
    for (auto z : gr[i]){

    }
            cout << z << "\n";
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    GRAPH gr (node);
    for (int i = 0; i < node; i++)
    {
        int fr, to; cin >> fr >> to;
        add_egde(gr, fr, to);
    }
    int query; cin >> query;
    for (int i = 0; i < query; i++){
        int fr, to; cin >> fr >> to;
        find_egde(gr, fr, to);
    }
}
