//https://leetcode.com/problems/shortest-path-to-get-food/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution{
    public:
    bool check(vector<vector<char>> &m, const int &x, const int &y){
        if (x < 0 || x >= m.size())
            return true;
        if (y < 0 || y >= m[0].size())
            return true;
        return false;
    }
    int getFood(vector<vector<char>> &matrix){
        int xStart = 0, yStart = 0;
        for (int i = 0; i < matrix.size(); i++)
            for (int z = 0; z < matrix[i].size(); z++)
                if (matrix[i][z] == '*') xStart = i, yStart = z;
        queue<pair<pair<int, int>, int>> dem; dem.push({{xStart, yStart}, 1});
        vector<vector<int>> isVisited (matrix.size(), vector<int>(matrix[0].size(), 0));
        isVisited[xStart][yStart] = 1;
        while (!dem.empty()){
            pair<pair<int, int>, int> p = dem.front();
            dem.pop();
            int xcurr = p.first.first;
            int ycurr = p.first.second;
            int level = p.second;
            int xHor [4] {0, -1, 1, 0};
            int yHor [4] {-1, 0, 0, 1};
            for (int i = 0; i < 4; i++){
                int xMove = xcurr + xHor[i];
                int yMove = ycurr + yHor[i];
                if (check(matrix, xMove, yMove))
                    continue;
                if (matrix[xMove][yMove] == '#')
                    return level;
                if (matrix[xMove][yMove] == 'X')
                    continue;
                if (isVisited[xMove][yMove] == 0){
                    isVisited[xMove][yMove] = 1;
                    dem.push({{xMove, yMove}, level + 1});
                }
            }
        }
    return -1;
    }
};

int main()
{
    Solution s;
    vector<vector<char>> k;
    k = {{'X','X','X','X','X','X'},{'X','*','O','O','O','X'},{'X','O','O','#','O','X'},{'X','X','X','X','X','X'}};
    k = {{'X','X','X','X','X'},{'X','*','X','O','X'},{'X','O','X','#','X'},{'X','X','X','X','X'}};
    k = {{'X','X','X','X','X','X','X','X'},{'X','*','O','X','O','#','O','X'},{'X','O','O','X','O','O','X','X'},{'X','O','O','O','O','#','O','X'},{'X','X','X','X','X','X','X','X'}};
    k = {{'O', '*'}, {'#', 'O'}};
    k = {{'X', '*'}, {'#', 'X'}};
    cout << s.getFood(k);
}
