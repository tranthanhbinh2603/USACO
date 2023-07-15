#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_adge(GRAPH &gr, int from, int to){
    gr[from].push_back(to);
}

void print_chain(GRAPH &gr, int start){
//    int current_node = start;
//    while (gr[current_node].size() > 0){
//        cout << current_node << " ";
//        current_node = gr[current_node][0];
//    }
//    cout << current_node<< "\n";
    cout << start << " ";
    if (gr[start].size() <= 0)
        return;
    print_chain(gr, gr[start][0]);
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge; cin >> node >> edge;
    GRAPH gr(node);
    for (int i = 0; i < edge; i++)
    {
        int st, en;
        cin >> st >> en;
        add_adge(gr, st, en);
    }
    int q; cin >> q;
    while (q--){
        int st; cin >> st;
        print_chain(gr, st);
        cout << "\n";
    }
}
