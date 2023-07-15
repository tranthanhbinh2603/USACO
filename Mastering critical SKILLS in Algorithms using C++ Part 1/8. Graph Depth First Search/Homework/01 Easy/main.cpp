#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void DFS_search(vector<vector<int>> &gr, int kill, vector<bool> &isVisited, vector<int> &res){
        isVisited[kill] = true;
        for (int process : gr[kill])
            if (!isVisited[process]){
                res.push_back(process);
                DFS_search(gr, process, isVisited, res);
            }
    }

    vector<int> killProcess(vector<int> &pid, vector<int> &ppid, int kill){
        vector<vector<int>> GRAPH (50000);
        for (int i = 0; i < pid.size(); i++)
            if (ppid[i] != 0)
                GRAPH[ppid[i]].push_back(pid[i]);
        vector<bool> isVisited (50000);
        vector<int> res; res.push_back(kill);
        DFS_search(GRAPH, kill, isVisited, res);
        return res;
    }
};


int main()
{
    vector<int> pid {2,0,1,6,3,4,5};
    vector<int> ppid {5,5,5,2,2,1,0};
    Solution s;
    vector<int> res = s.killProcess(pid, ppid, 4);
    for (auto i : res)
        cout << i << " ";
}
