//Homework 01 - Medium
#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

//Dung map voi tinh huong can 2 bien
struct data{
    string to;
    int cost;

    data();
    data(string t, int co){
        to = t;
        cost = co;
    }

    bool operator < (const data & e) const {
		if (to != e.to)
			return to < e.to;
		return cost < e.cost;
	}
};

typedef map<string, multiset<data>> GRAPH;

void add_directed_edge(GRAPH &gr, string fr, string to, int cost){
    data d (to, cost);
    gr[fr].insert(d);
}

void print_adjaceny_matrix(GRAPH &graph) {

	for(auto node : graph) {
		cout << "Flights from " << node.first<<": \n";
		for(const data &edge : node.second)
			cout<<"\tTo "<<edge.to<<" with cost "<<edge.cost<<"\n";
	}
}

int main()
{
    freopen("data.inp", "r", stdin);
    int nodes, edges;
	cin >> nodes >> edges;

	GRAPH graph;

	for (int e = 0; e < edges; ++e) {
		string from, to;
		int cost;
		cin >> from >> to >> cost;
		add_directed_edge(graph, from, to, cost);
	}
	print_adjaceny_matrix(graph);
}
