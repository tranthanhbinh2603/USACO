//https://leetcode.com/problems/longest-consecutive-sequence/
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <climits>
using namespace std;

class Solution {
public:
    void dfs_search(map<int, vector<int>> &gr, int node, set<int> &isVisited, int &cou){
        for (int i : gr[node])
        if (!isVisited.count(i)){
            cou+=1;isVisited.insert(i);
            dfs_search(gr, i, isVisited, cou);
        }
    }

    int longestConsecutive(vector<int>& nums) {
        map<int, vector<int>> GRAPH;
        set<int> hsh;
        map<int, int> m_cnt;
        for (auto i : nums){
            GRAPH[i - 1].push_back(i);
            hsh.insert(i);
            m_cnt[i]++;
        }
        int ans {0}; set<int> ch;
        for (auto i : hsh){
            int cnt {1};
            if (GRAPH[i].size() >= 1 && ch.count(i) == 0)
                dfs_search(GRAPH, i, ch, cnt);
            if (cnt > ans) ans = cnt;
        }
        return ans;
    }
};

int main()
{
    vector<int> k {0,0,-1};
    Solution s;
    cout << s.longestConsecutive(k);
}
