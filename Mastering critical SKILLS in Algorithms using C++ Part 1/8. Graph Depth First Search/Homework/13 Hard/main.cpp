#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    bool check(vector<vector<int>>& heights, int r, int c){
        if (r < 0 || r >= heights.size())
            return false;
        if (c < 0 || c >= heights[0].size())
            return false;
        return true;
    }

    void dfs (vector<vector<int>>& heights, int &ans, int &temp, int r = 0, int c = 0, int mov_r = 0, int mov_c = 0){
        if (!check(heights, r, c))
            return;
        else if (r == heights.size() - 1 && c == heights.size() - 1){
            if (ans > temp) ans = temp;
        }
        else if (prv_r != -1 && prv_c != -1){
            int t = abs(heights[prv_r][prv_c] - heights[r][c]);
            if (temp < t)
                temp = t;
        }
        //isVisited[r][c] = true;
        if (mov_r != 1 || mov_c != 0) dfs(heights, ans, temp, r + 1, c, r, c);
        if (mov_r != 0 || mov_c != 1) dfs(heights, ans, temp, r, c + 1, r, c);
        dfs(heights, ans, temp, r - 1, c, r, c);
        dfs(heights, ans, temp, r, c - 1, r, c);
    }

    int minimumEffortPath(vector<vector<int>>& heights) {
        int ans {INT_MAX}, temp {-INT_MAX};
        //vector<vector<bool>> visit (heights.size(), vector<bool>(heights[0].size()));
        dfs(heights, ans, temp);
        return ans;
    }
};

int main()
{
    vector<vector<int>> v {{1,2,2},{3,8,2},{5,3,5}};
    Solution s;
    cout << s.minimumEffortPath(v);
}
