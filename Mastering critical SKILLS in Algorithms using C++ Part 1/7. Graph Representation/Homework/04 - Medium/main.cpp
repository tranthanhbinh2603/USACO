//Homework 2 - Medium (Lon thu tu)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct flight{
    string from;
    string to;
    int cost;

    flight();
    flight(string fr, string t, int co){
        from = fr;
        to = t;
        cost = co;
    }
};

typedef vector<flight> GRAPH;

void add_flight(GRAPH &gr, string fr, string to, int cost){
    flight f (fr, to, cost);
    gr.push_back(f);
}

void print(GRAPH gr){
    string pv = "";
    for (auto i : gr){
        if (pv != i.from)
            cout << "Flight from " << i.from << "\n";
        cout << "\tTo " << i.to << " with cost " << i.cost << "\n";
        pv = i.from;
    }
}

bool cmp(flight f1, flight f2){
    if (f1.from < f2.from)
        return true;
    else if (f1.from == f2.from && f1.to < f2.to)
        return true;
    else if (f1.from == f2.from && f1.to == f2.to && f1.cost < f2.cost)
        return true;
    return false;
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    GRAPH gr;
    for (int i = 0; i < edge; i++){
        string fr; string to; int cost;
        cin >> fr >> to >> cost;
        add_flight(gr, fr, to, cost);
    }
    sort(gr.begin(), gr.end(), cmp);
    print(gr);
}
