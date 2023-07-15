// https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;

class Solution {
public:
    void dfs_search(map<int, vector<int>>& gr, int node, vector<int> &ans, unordered_set <int> &isVisited){
        ans.push_back(node);
        isVisited.insert(node);
        for (auto i : gr[node])
            if (isVisited.count(i) == 0)
                dfs_search(gr, i, ans, isVisited);
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> ans;
        vector <int> visited;
        map<int, vector<int>> GRAPH;
        set<int> xh;
        unordered_set <int> ch;
        for (int i = 0; i < adjacentPairs.size(); i++){
            GRAPH[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            GRAPH[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
            xh.insert(adjacentPairs[i][1]);
            xh.insert(adjacentPairs[i][0]);
        }
        for (auto i : xh)
        if (GRAPH[i].size() == 1){
            dfs_search(GRAPH, i, ans, ch);
            break;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> v {{2,1},{3,4},{3,2}};
    Solution s;
    vector<int> v2 = s.restoreArray(v);
    for (auto i : v2)
        cout << i << " ";
}
