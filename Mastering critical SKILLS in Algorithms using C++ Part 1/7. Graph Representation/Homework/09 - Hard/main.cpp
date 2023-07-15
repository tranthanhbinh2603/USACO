#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> GRAPH;

void add_adge(GRAPH &gr, int fr, int to){
    gr[to].push_back(to);
}

bool is_universal_sink(GRAPH &graph, int i) {	// O(V)
	for (int j = 0; j < (int) graph.size(); ++j) {
		// Node i doesn't link to any other node j, including itself (loop)
		if (graph[i][j])
			return false;
		// Every node must link to i (except myself)
		if (i != j && !graph[j][i])
			return false;
	}
	return true;
}

//int find_universal_sink_fast(GRAPH &graph){
////    for (int i = 0; i < graph.size(); i++){
////        cout << graph[i].size() << " ";
////        if (graph[i].size() == graph.size() - 2)
////            return i;
////    }
////    return -1;
//    int i = 0, j = 0, sz = graph.size();
//	while (i < sz && j < sz) {
//		if(graph[i][j])
//			i = i+1;
//		else
//			j = j+1;
//	}
//	if (i >= sz || !is_universal_sink(graph, i))
//		return -1;
//	return i;
//}

int find_universal_sink_fast(GRAPH &graph) {	// O(V)
	int i = 0, j = 0, sz = graph.size();

	while (i < sz && j < sz) {
		if(graph[i][j])
			i = i+1;
		else
			j = j+1;
	}
	if (i >= sz || !is_universal_sink(graph, i))
		return -1;
	return i;
}

int main()
{
    freopen("data.inp", "r", stdin);
    int q;
    cin >> q;
    while (q--){
        int node, edge;
        cin >> node >> edge;
        GRAPH gr (node, vector<int>(node));
        for (int i = 0; i < edge; i++)
        {
            int fr, to; cin >> fr >> to;
            add_adge(gr, fr, to);
        }
        cout << find_universal_sink_fast(gr) << "\n";
    }
}
