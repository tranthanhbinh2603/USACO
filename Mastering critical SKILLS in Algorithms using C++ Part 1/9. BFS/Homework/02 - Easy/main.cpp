#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool validTree(int nodes, vector<vector<int>> &edges){
    vector<vector<int>> GRAPH (nodes);
    for (auto i : edges)
        GRAPH[i[0]].push_back(i[1]);
    queue<int> q;
    q.push(0);
    vector<int> isVisited (nodes, 0); isVisited[0] = 1;
    while (!q.empty()){
        int currNode = q.front();
        q.pop();
        for (auto i : GRAPH[currNode])
        if (isVisited[i] == 0){
            q.push(i);
            isVisited[i] = 1;
        }
        else return false;
    }
    for (auto i : isVisited)
        if (i != 1) return false;
    return true;
}

int main()
{
    int n = 5;
    //vector<vector<int>> e {{0,1},{0,2},{0,3},{1,4}};
    vector<vector<int>> e {{0,1},{1,2},{2,3},{1,3},{1,4}};
    cout << validTree(n, e);
}
