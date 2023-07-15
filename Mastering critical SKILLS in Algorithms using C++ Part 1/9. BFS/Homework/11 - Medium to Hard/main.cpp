#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    void bfs(vector<vector<pair<int, int>>> &graph, vector<int> &ans){
        queue<pair<pair<int, int>, int>> q;
        vector<int> isVisitedRed0 (graph.size(), 0);
        vector<int> isVisitedBlue1 (graph.size(), 0);
        q.push({{0, 1}, 0});
        ans[0] = 0;
        while (!q.empty()){
            int node_cur = q.front().first.first;
            int node_color = q.front().first.second;
            int level = q.front().second;
            q.pop();
            for (auto i : graph[node_cur]){
                if (node_cur != 0 && (i.second == node_color || isVisitedRed0[i.first] || isVisitedBlue1[i.first]))
                    continue;
                q.push({{i.first, i.second}, level + 1});
                isVisited.push_back({{i.first, i.second}, node_color});
                ans[i.first] = level + 1;
            }
        }
    }

    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int> ans (n, -1);
        vector<vector<pair<int, int>>> graph (n);
        for (auto i : redEdges)
            graph[i[0]].push_back({i[1], 0});
        for (auto i : blueEdges)
            graph[i[0]].push_back({i[1], 1});
        bfs(graph, ans);
        return ans;
    }
};

int main()
{
    int n; vector<vector<int>> red_edge, blue_edge;
    //n = 3; red_edge = {{0,1},{1,2}}; blue_edge = {};
    //n = 3; red_edge = {{0,1}}; blue_edge = {{2,1}};
    //n = 4; red_edge = {{0,1},{2,3}}; blue_edge = {{1,2}};
    n = 3; red_edge = {{0,1},{0,2}}; blue_edge = {{1,0}};
    //n = 5; red_edge = {{0,1},{1,2},{2,3},{3,4}}; blue_edge = {{1,2},{2,3},{3,1}};
    Solution s;
    vector<int> ans = s.shortestAlternatingPaths(n, red_edge, blue_edge);
    for (auto i: ans)
        cout << i << " ";
}
