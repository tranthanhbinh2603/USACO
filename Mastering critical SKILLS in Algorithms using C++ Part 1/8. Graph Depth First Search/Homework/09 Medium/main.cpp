//https://leetcode.com/problems/sort-items-by-groups-respecting-dependencies/description/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void dfs_search(vector<vector<int>>  &gr, int node, vector<bool> &isVisited,  vector<int> &nodes, vector<char> &chars, const string &s)
    {
        isVisited[node] = true;
        for (int i : gr[node])
        if (!isVisited[i]){
            nodes.push_back(i);
            chars.push_back(s[i]);
            dfs_search(gr, i, isVisited, nodes, chars, s);
        }
    }

    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<char> ans (s.size());
        vector<vector<int>> gr (s.size());
        for (int i = 0; i < pairs.size(); i++){
            gr[pairs[i][0]].push_back(pairs[i][1]);
            gr[pairs[i][1]].push_back(pairs[i][0]);
        }
        vector<bool> ch (s.size());
        for (int i = 0; i < s.size(); i++)
        if (!ch[i]){
            vector<int> nodes {i};
            vector<char> chars {s[i]};
            dfs_search(gr, i, ch, nodes, chars, s);
            sort(nodes.begin(), nodes.end());
            sort(chars.begin(), chars.end());
            for (int i = 0; i < nodes.size(); i++)
                ans[nodes[i]] = chars[i];
        }
        string s2;
        for (auto i : ans)
            s2.push_back(i);
        return s2;
    }
};


int main()
{
    string s {"cba"};
    vector<vector<int>> v {{0,1},{1,2}};
    Solution s2;
    string a = s2.smallestStringWithSwaps(s, v);
    cout << a;
}
