#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_adge(GRAPH &gr, int from, int to){
    gr[from].push_back(to);
}

void DFS_search(GRAPH &gr, int st, vector<bool> &isVisited){
    isVisited[st] = true;
    for (int i : gr[st])
        if (!isVisited[i]){
            cout << i << " ";
            DFS_search(gr, i, isVisited);
        }
}

int main()
{
    freopen("data.inp", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    GRAPH gr (node);
    for (int i = 0; i < node; i++){
        int fr, to;
        cin >> fr >> to;
        add_adge(gr, fr, to);
    }
     for (int i = 0; i < node; i++){
        cout << i << ": ";
        vector<bool> v (node);
        DFS_search(gr, i, v);
        cout << "\n";
     }
}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//typedef vector<vector<int>> GRAPH;
//
//void add_directed_edge(GRAPH &graph, int from, int to) {
//	graph[from].push_back(to);
//}
//
//void print_adjaceny_matrix(GRAPH &graph) {
//	int nodes = graph.size();
//	for (int from = 0; from < nodes; ++from) {
//		cout << "Node " << from << " has neighbors: ";
//		for (int to = 0; to < (int) graph[from].size(); ++to)
//			cout << graph[from][to] << " ";
//		cout << "\n";
//	}
//}
//
//void dfs(GRAPH &graph, int node, vector<bool> &visited) {
//	visited[node] = true;
//
//	for (int neighbour : graph[node]) {
//		if (!visited[neighbour]) { // Avoid cycling
//			cout <<  neighbour << " ";
//			dfs(graph, neighbour, visited);
//		}
//	}
//}
//void reachability(GRAPH &graph) {
//	int nodes = graph.size();
//	for (int i = 0; i < nodes; ++i) {
//		vector<bool> visited(nodes);	// RESET
//		cout << i << ": ";
//		dfs(graph, i, visited);
//		cout << "\n";
//	}
//}
//
//int main() {
//	freopen("data.inp", "rt", stdin);
//
//	int nodes, edges;
//	cin >> nodes >> edges;
//
//	GRAPH graph(nodes);	// observe: empty lists
//
//	for (int e = 0; e < edges; ++e) {
//		int from, to;
//		cin >> from >> to;
//		add_directed_edge(graph, from, to);
//	}
//	reachability(graph);
//
//	return 0;
//}
//
///*
// 7 9
// 2 0
// 0 1
// 1 4
// 4 3
// 3 1
// 1 0
// 0 3
// 5 6
// 6 6
//
//
//Output
//Reachable set of node 0
//	We can reach 1
//	We can reach 4
//	We can reach 3
//Reachable set of node 1
//	We can reach 4
//	We can reach 3
//	We can reach 0
//Reachable set of node 2
//	We can reach 0
//	We can reach 1
//	We can reach 4
//	We can reach 3
//Reachable set of node 3
//	We can reach 1
//	We can reach 4
//	We can reach 0
//Reachable set of node 4
//	We can reach 3
//	We can reach 1
//	We can reach 0
//Reachable set of node 5
//	We can reach 6
//Reachable set of node 6
//
// */
//
