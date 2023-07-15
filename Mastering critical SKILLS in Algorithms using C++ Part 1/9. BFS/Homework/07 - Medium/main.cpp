//https://leetcode.com/problems/walls-and-gates/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution{
public:
    void print(queue<pair<pair<int, int>, int>> q){
        while (!q.empty()){
            cout << q.front().first.first << " " << q.front().first.second << "\n";
            q.pop();
        }
        cout << "==============\n";
    }
    bool check(vector<vector<int>>&m, const int &x, const int &y){
        if (x < 0 || x >= m.size())
            return true;
        if (y < 0 || y >= m[0].size())
            return true;
        return false;
    }
    void wallsAndGates(vector<vector<int>>& rooms){
        queue<pair<pair<int, int>, int>>  q;
        vector<pair<int, int>> gate;
        for (int i = 0; i < rooms.size(); i++)
            for (int z = 0; z < rooms[i].size(); z++)
                if (rooms[i][z] == 0)
                    gate.push_back({i, z});
        for (auto aaaa : gate){
            q.push({{aaaa.first, aaaa.second}, 0});
            vector<vector<int>> isVisited (rooms.size(), vector<int>(rooms[0].size(), 0));
            while (!q.empty()){
                int i = q.front().first.first;
                int z = q.front().first.second;
                int lv = q.front().second;
                q.pop();
                if (isVisited[i][z])
                    continue;
                isVisited[i][z] = 1;
                if (rooms[i][z] != 0)
                    if (rooms[i][z] > lv && rooms[i][z] != -1) rooms[i][z] = lv;
                int xHor [4] {0, -1, 1, 0};
                int yHor [4] {-1, 0, 0, 1};
                for (int k = 0; k < 4; k++){
                    int xMove = i + xHor[k];
                    int yMove = z + yHor[k];
                    if (check(rooms, xMove, yMove))
                        continue;
                    if (rooms[xMove][yMove] != -1){
                        q.push({{xMove, yMove}, lv + 1});
                    }
                }
            }
        }
    }
};

int main()
{
    freopen("f.out", "w", stdout);
    vector<vector<int>> k;
    k = {{2147483647,-1,0,2147483647},{2147483647,2147483647,2147483647,-1},{2147483647,-1,2147483647,-1},{0,-1,2147483647,2147483647}};
    Solution s; s.wallsAndGates(k);
    for (auto i : k){
        for (auto z : i)
            cout << z << " ";
        cout << "\n";
    }
    k = {{2147483647,-1,2147483647,2147483647},{2147483647,2147483647,2147483647,-1},{2147483647,-1,2147483647,-1},{0,-1,2147483647,2147483647}};
    s.wallsAndGates(k);
    for (auto i : k){
        for (auto z : i)
            cout << z << " ";
        cout << "\n";
    }
    k = {{2147483647,-1,0,2147483647},{2147483647,2147483647,2147483647,-1},{2147483647,-1,2147483647,-1},{2147483647,-1,2147483647,2147483647}};
    s.wallsAndGates(k);
    for (auto i : k){
        for (auto z : i)
            cout << z << " ";
        cout << "\n";
    }
    k = {{-1}};
    s.wallsAndGates(k);
    for (auto i : k){
        for (auto z : i)
            cout << z << " ";
        cout << "\n";
    }


}
