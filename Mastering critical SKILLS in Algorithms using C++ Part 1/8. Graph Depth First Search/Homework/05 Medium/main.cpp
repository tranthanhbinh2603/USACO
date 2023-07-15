//https://leetcode.com/problems/number-of-closed-islands/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<vector<int>>& grid, int r, int c){
        if (r < 0 || r >= grid.size())
            return false;
        if (c < 0 || c >= grid[0].size())
            return false;
        return true;
    }

    void dfs_search(vector<vector<int>>& v, int r, int c, vector<vector<bool>> &isVisited, bool &isTrue){
        //cout << r << " " << c << " " << isTrue << "\n";
        if (!check(v, r, c) || isVisited[r][c] || v[r][c] == 1){
            return;
        }
        if (r == 0 || r == v.size() - 1 || c == 0 || c == v[0].size() - 1)
            isTrue = false;
        isVisited[r][c] = true;
        dfs_search(v, r - 1, c, isVisited, isTrue);
        dfs_search(v, r + 1, c, isVisited, isTrue);
        dfs_search(v, r, c - 1, isVisited, isTrue);
        dfs_search(v, r, c + 1, isVisited, isTrue);
    }

    int closedIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> v (grid.size(), vector<bool>(grid[0].size()));
        int cnt {0};
        for (int i = 0; i < grid.size(); i++)
        for (int z = 0; z < grid[0].size(); z++){
            bool is_true = true;
            if (!v[i][z] && grid[i][z] == 0){
                cout << "\n";
                dfs_search(grid, i, z, v, is_true);
                cnt += is_true;
            }
        }
        return cnt;
    }
};

int main()
{
    vector<vector<int>> v {
        {1,1,1,1,1,1,1,0},
        {1,0,0,0,0,1,1,0},
        {1,0,1,0,1,1,1,0},
        {1,0,0,0,0,1,0,1},
        {1,1,1,1,1,1,1,0}};
    Solution s;
    cout << s.closedIsland(v);
}
