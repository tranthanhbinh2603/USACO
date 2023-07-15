#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    void bfs(map<int, set<int>> &gr1, map<int, set<int>> &gr2, vector<bool> &isVisit, int &ans, int node = 0){
        isVisit[node] = true;
        for (auto i : gr1[node]){
            if (!isVisit[i]){
                if (gr2[node].count(i)) ans++;
                bfs(gr1, gr2, isVisit, ans, i);
            }
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        map<int, set<int>> GRAPH1; map<int, set<int>> GRAPH2;
        for (int i = 0; i < connections.size(); i++){
            GRAPH1[connections[i][0]].insert(connections[i][1]);
            GRAPH1[connections[i][1]].insert(connections[i][0]);
            GRAPH2[connections[i][0]].insert(connections[i][1]);
        }
        int ans {0};
        vector<bool> isVisited(n);
        bfs(GRAPH1, GRAPH2, isVisited, ans);
        return ans;
    }
};

int main()
{
    //vector<vector<int>> v {{0,1},{1,3},{2,3},{4,0},{4,5}};
    //vector<vector<int>> v {{1,0},{1,2},{3,2},{3,4}};
    vector<vector<int>> v {{1,0}, {2, 0}};
    Solution s;
    cout << s.minReorder(3, v);
}
