#include <iostream>
#include <vector>

using namespace std;
typedef vector<vector<int>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to){
    graph[from][to]++;
}
void add_undirected_edge(GRAPH &graph, int from, int to){
    graph[from][to]++;
    graph[to][from]++;
}
void print_adj_matrix(GRAPH &gr){
    //Y tuong: Tu so node, dung 2 for tim kiem theo dang from - to
    //Cai nao lon hon 1 lay
    int node = gr.size() - 1;
    for (int i = 0; i <= node; i++)
        for (int z = 0; z <= node; z++)
            if (gr[i][z] > 0)
                cout << "Tu " << i << " toi " << z << " co " << gr[i][z] << " canh noi giua 2 diem do\n";
}

int main()
{
    freopen("data_node.inp", "r", stdin);
    int node, egde;
    cin >> node >> egde;
    GRAPH graph (node, vector<int>(node));
    for (int i = 0; i < egde; i++){
        int fr, to;
        cin >> fr >> to;
        add_directed_edge(graph, fr, to);
    }
    print_adj_matrix(graph);
}
