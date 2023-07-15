//https://leetcode.com/problems/open-the-lock/description/
#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string bd (const string &s, int cs, int gt){
        string k = s;
        if (k[cs] == '0' && gt == -1) k[cs] = '9';
        else if (k[cs] == '9' && gt == 1) k[cs] = '0';
        else k[cs] = (char)((int)k[cs] + gt);
        return k;
    }
    int openLock(vector<string>& deadends, string target) {
        queue<pair<string, int>> q;
        q.push({"0000", 0});
        unordered_set<string> s, s_dead;
        for (auto i : deadends)
            s_dead.insert(i);
        while (!q.empty()){
            string curr = q.front().first;
            int lv = q.front().second;
            q.pop();
            if (curr == target)
                return lv;
            if (s_dead.find(curr) != s_dead.end() || s.find(curr) != s.end())
                continue;
            s.insert(curr);
            for (int i = 0; i < 4; i++){
                q.push({bd(curr, i, 1), lv + 1});
                q.push({bd(curr, i, -1), lv + 1});
            }
        }
        return -1;
    }
};

int main()
{
    vector<string> v; string tar;
    v = {"0201","0101","0102","1212","2002"}; tar = "0202";
    v = {"8888"}; tar = "0009";
    v = {"8887","8889","8878","8898","8788","8988","7888","9888"}; tar = "8888";
    Solution k; cout << k.openLock(v, tar);
}
