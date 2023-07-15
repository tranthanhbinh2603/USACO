//https://leetcode.com/problems/coloring-a-border/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<vector<int>> &g, int r, int c){
        if (r < 0 || r >= g.size() || c < 0 || c >= g[0].size())
            return false;
        return true;
    }

    bool check_4_dime(vector<vector<bool>> &g, int r, int c){
        if (r == 0 || r == g.size() - 1 || c == 0 || c == g[0].size() - 1)
            return true;
        if (g[r][c] == g[r+1][c] && g[r][c] == g[r][c+1] && g[r][c] == g[r-1][c] && g[r][c] == g[r][c-1])
            return false;
        return true;
    }

    void dfs_search(vector<vector<int>>& grid, int row, int col, vector<vector<bool>> &isVisited, int color)
    {
        if (!check(grid, row, col) || grid[row][col] != color || isVisited[row][col])
            return;
        isVisited[row][col] = true;
        dfs_search(grid, row + 1, col, isVisited, color);
        dfs_search(grid, row - 1, col, isVisited, color);
        dfs_search(grid, row, col + 1, isVisited, color);
        dfs_search(grid, row, col - 1, isVisited, color);
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        vector<vector<int>> ans (grid.size(), vector<int>(grid[0].size()));
        vector<vector<bool>> c (grid.size(), vector<bool>(grid[0].size()));
        dfs_search(grid, row, col, c, grid[row][col]);
        for (int i = 0; i < grid.size(); i++)
            for (int z = 0; z < grid[0].size(); z++)
                if (c[i][z] && check_4_dime(c, i, z))
                    ans[i][z] = color;
                else
                    ans[i][z] = grid[i][z];
        return ans;
    }
};

int main()
{
    vector<vector<int>> v {
        {2,3,3,2,3},
        {2,2,2,2,3},
        {2,2,2,2,3},
        {2,2,4,2,3},
        {2,2,2,2,3}
    };
    Solution s;
    vector<vector<int>> ans = s.colorBorder(v, 0, 0, 9);
    for (auto i: ans){
        for (auto z : i)
            cout << z << " ";
        cout << "\n";
    }
}
