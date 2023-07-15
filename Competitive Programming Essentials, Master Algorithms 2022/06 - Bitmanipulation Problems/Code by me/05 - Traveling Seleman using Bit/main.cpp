#include <iostream>
#include <vector>
using namespace std;

int tsp(vector<vector<int>> gr, int cou, int node, int count_city){
    if (cou == (1 << count_city) - 1)
        return gr[node][0];

    int ans = INT_MAX;

    for (int i = 0; i < count_city; i++){
        if ((cou & (1 << i)) == 0){
            int fin = gr[node][i] + tsp(gr, cou | (1 << i), i, count_city);
            ans = min(fin, ans);
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix {
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0}
    };
    cout << tsp(matrix, 1, 0, 4);
}
