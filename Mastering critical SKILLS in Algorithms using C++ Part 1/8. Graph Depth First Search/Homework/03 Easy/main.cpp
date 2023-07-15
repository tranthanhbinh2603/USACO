#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void DFS_search(vector<vector<int>>& edges, int id, vector<bool> &isVisited){
        isVisited[id] = true;
        for (auto i : edges[id])
            if (isVisited[i] == false)
                DFS_search(edges, i, isVisited);
    }

    int countComponents(int n, vector<vector<int>>& edges){
        vector<bool> isVisited (edges.size());
        vector<vector<int>> gr (n);
        for (int i = 0; i < edges.size(); i++)
            gr[edges[i][0]].push_back(edges[i][1]);
        int ans {0};
        for (int i = 0; i < n; i++)
            if (isVisited[i] == false){
                ans++;
                DFS_search(gr, i, isVisited);
            }
        return ans;
    }
};

int main()
{
    vector<vector<int>> edges {{0,1},{1,2},{2,3},{3,4}};
    Solution s;
    cout << s.countComponents(5, edges);
}
