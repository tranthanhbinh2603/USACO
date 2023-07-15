#include <iostream>
#include <vector>
<<<<<<< HEAD
#include <set>
=======
>>>>>>> a563318c241fb325718f8e0f53aa0c3db75d3fd5
using namespace std;

class Solution {
public:
<<<<<<< HEAD
    bool isBipartite(vector<vector<int>>& graph) {
        set<int> divA, divB;
        for (int i = 0; i < graph.size(); i++){
            bool is_div_A {true}, is_Haved {true};
            if (divB.count(i)) is_div_A = false;
            if (!divB.count(i) && !divA.count(i)) is_Haved = false;
            if (is_div_A){
                if (!is_Haved) divA.insert(i);
                for (int z = 0; z < graph[i].size(); z++){
                    if (divA.count(graph[i][z])) return false;
                    divB.insert(graph[i][z]);
                }
            }
            else {
                if (!is_Haved) divB.insert(i);
                for (int z = 0; z < graph[i].size(); z++){
                    if (divB.count(graph[i][z])) return false;
                    divA.insert(graph[i][z]);
                }
            }
=======
    void dfs (vector<vector<int>>& graph, vector<int> &isVisited, int i, bool &is_color_confilt, int color = 1){
        if (isVisited[i] == 0)
            isVisited[i] = color;
        else { if (isVisited[i] != color)
            is_color_confilt = true;
            return;
        }
        for (auto z : graph[i])
            dfs(graph, isVisited, z, is_color_confilt, 3 - color);
    }

    bool isBipartite(vector<vector<int>>& graph) {
        bool is_color_confilt {false};
        for (int i = 0; i < graph.size(); i++)
        {
            vector<int> isVisited (graph.size());
            dfs(graph, isVisited, i, is_color_confilt);
            if (is_color_confilt)
                return false;
>>>>>>> a563318c241fb325718f8e0f53aa0c3db75d3fd5
        }
        return true;
    }
};

int main()
{
<<<<<<< HEAD
    vector<vector<int>> v {{1},{0,3},{3},{1,2}};
=======
    vector<vector<int>> v {{1,2,3},{0,2},{0,1,3},{0,2}};
>>>>>>> a563318c241fb325718f8e0f53aa0c3db75d3fd5
    Solution s;
    cout << s.isBipartite(v);
}
