//https://leetcode.com/problems/jump-game-iii/
#include <iostream>
#include <unordered_set>
#include <queue>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        unordered_set<int> s;
        s.insert(start);
        queue<int> q;
        q.push(start);
        while (!q.empty()){
            int i = q.front();
            s.insert(i);
            q.pop();
            if (arr[i] == 0)
                return true;
            if (i + arr[i] >= arr.size() || s.find(i + arr[i]) != s.end()){
                ;
            }
            else q.push(i+arr[i]);
            if (i - arr[i] < 0 || s.find(i - arr[i]) != s.end()){
                ;
            }
            else q.push(i - arr[i]);
        }
        return false;
    }
};

int main()
{
    vector <int> v; int s;
    v = {4,2,3,0,3,1,2}; s = 5;
    Solution so;
    cout << so.canReach(v,s);
}
