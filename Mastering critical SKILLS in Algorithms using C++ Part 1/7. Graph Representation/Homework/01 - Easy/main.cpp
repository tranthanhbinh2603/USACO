#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct EDGE{
    int from;
    int to;
    int weight;

    EDGE(int _from, int _to, int _weight)
    {
        from = _from;
        to = _to;
        weight = _weight;
    }
};

typedef vector<EDGE> GRAPH;

void add_edge(GRAPH &graph, int from, int to, int cost){
    EDGE e (from, to, cost);
    graph.push_back(e);
}

bool cmp(EDGE e1, EDGE e2){
    if (e1.weight < e2.weight)
        return true;
    else return false;
}

void print(GRAPH gr){
    for (auto i : gr)
        cout << i.from << " " << i.to << " " << i.weight << "\n";
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edg;
    cin >> node >> edg;
    GRAPH gr ;
    for (int i = 0; i < edg; i++){
        int from, to, cost; cin >> from >> to >> cost;
        add_edge(gr, from, to, cost);
    }
    sort(gr.begin(), gr.end(), cmp);
    print(gr);
}
