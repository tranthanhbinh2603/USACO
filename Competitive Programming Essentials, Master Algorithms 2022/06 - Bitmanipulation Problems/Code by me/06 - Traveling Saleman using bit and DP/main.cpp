#include <iostream>
#include <vector>
using namespace std;

int tsp(vector<vector<int>> &gr, int cou, int node, int count_city, vector<vector<int>> &dp){
    if (cou == (1 << count_city) - 1)
        return gr[node][0];

    if (dp[cou][node] != -1)
        return dp[cou][node];

    int ans = INT_MAX;

    for (int i = 0; i < count_city; i++){
        if ((cou & (1 << i)) == 0){
            int fin = gr[node][i] + tsp(gr, cou | (1 << i), i, count_city, dp);
            ans = min(fin, ans);
        }
    }
    dp[cou][node] = ans;
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
    vector<vector<int>> dp (1 << matrix.size(), vector<int>(1 << matrix.size(), -1));
    cout << tsp(matrix, 1, 0, 4, dp);
}
