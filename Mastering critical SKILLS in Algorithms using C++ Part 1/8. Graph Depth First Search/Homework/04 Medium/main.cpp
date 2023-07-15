//https://leetcode.com/problems/count-sub-islands/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool isVaild(vector<vector<int>> &v, int ro, int co){
        if (ro < 0 || ro >= v.size())
            return false;
        if (co < 0 || co >= v[0].size())
            return false;
        return true;
    }

    void bfs(vector<vector<int>> &grid1, vector<vector<int>> &grid2, vector<vector<bool>> &isVisited, int ro, int co, bool &isSum){
        //Check ket thuc de quy
        //cout << isVaild(grid1, ro, co);
        if (!isVaild(grid1, ro, co) || isVisited[ro][co] || grid2[ro][co] == 0)
            return;
        //Check ket qua cuoi cung xem co phai dao thoa man khong
        if (grid1[ro][co] == 0 && grid2[ro][co] == 1)
            isSum = false;
        isVisited[ro][co] = true;
        bfs(grid1, grid2, isVisited, ro - 1, co, isSum);
        bfs(grid1, grid2, isVisited, ro + 1, co, isSum);
        bfs(grid1, grid2, isVisited, ro, co - 1, isSum);
        bfs(grid1, grid2, isVisited, ro, co + 1, isSum);
    }

    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2){
        vector<vector<bool>> v1 (grid1.size(), vector<bool>(grid1[0].size()));
        int cnt {0};
        for (int i = 0; i < grid1.size(); i++)
        for (int z = 0; z < grid1[0].size(); z++){
            bool isSum = true;
            if (grid2[i][z] == 0){
                v1[i][z] = true;
                continue;
            }
            else if (!v1[i][z]){
                bfs(grid1, grid2, v1, i, z, isSum);
                cnt += isSum;
            }
        }
        return cnt;
    }
};


int main()
{
    Solution s;
    vector<vector<int>> v1{
        {1,1,1,1,0,0},
        {1,1,0,1,0,0},
        {1,0,0,1,1,1},
        {1,1,1,0,0,1},
        {1,1,1,1,1,0},
        {1,0,1,0,1,0},
        {0,1,1,1,0,1},
        {1,0,0,0,1,1},
        {1,0,0,0,1,0},
        {1,1,1,1,1,0}
    };
    vector<vector<int>> v2{
        {1,1,1,1,0,1},
        {0,0,1,0,1,0},
        {1,1,1,1,1,1},
        {0,1,1,1,1,1},
        {1,1,1,0,1,0},
        {0,1,1,1,1,1},
        {1,1,0,1,1,1},
        {1,0,0,1,0,1},
        {1,1,1,1,1,1},
        {1,0,0,1,0,0}
    };
    cout << s.countSubIslands(v1, v2);
}
