#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> GRAPH;

int gen_egde(GRAPH &gr, int r, int c){
    for (int i = 0; i < r * c; i++){
        if (i % c != 0)
            gr[i][i - 1] = 1;
        if ((i + 1) % c != 0)
            gr[i][i + 1] = 1;
        if (i >= c)
            gr[i][i - c] = 1;
        if (i < r * c)
            gr[i][i + c] = 1;
    }
}

int print(GRAPH gr, int r, int c){
    for (int i = 0; i < r * c; i++){
        cout << "Node " << i << " has neighbor: ";
        for (int z = 0; z < r * c; z++)
            if (gr[i][z] != 0)
                cout << z << " ";
        cout << "\n";
    }
}

int main()
{
    int r, c;
    cin >> r >> c;
    GRAPH gr (r * c + 10, vector<int>(r * c + 10));
    gen_egde(gr, r, c);
    print(gr, r, c);
}
