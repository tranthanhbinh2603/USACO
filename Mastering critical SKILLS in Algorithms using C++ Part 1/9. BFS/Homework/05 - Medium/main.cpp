//https://leetcode.com/problems/minimum-operations-to-convert-number/
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    void print(queue<pair<int, int>> q){
        while (!q.empty()){
            cout << q.front().first << " " << q.front().second << "\n";
            q.pop();
        }
        cout << "==============\n";
    }
    int minimumOperations(vector<int>& nums, int start, int goal) {
        queue<pair<int, int>> q; q.push({start, 0});
        unordered_set<int> s;
        while (!q.empty()){
            int num = q.front().first;
            int lv = q.front().second;
            q.pop();
            if (num == goal)
                return lv;
            if (num < 0 || num > 1000)
                continue;
            if (s.find(num) != s.end())
                continue;
            s.insert(num);
            for (int i = 0; i < nums.size(); i++){
                q.push({num + nums[i], lv + 1});
                q.push({num - nums[i], lv + 1});
                q.push({num ^ nums[i], lv + 1});
            }
        }
        return -1;
    }
};

int main()
{
    freopen("f.out", "w", stdout);
    vector<int> n; int start; int goal;
    //Test 1:
    n = {2,4,12}; start = 2; goal = 12;
//    //Test 2:
//    n = {3,5,7}; start = 0; goal = -4;
//    //Test 3:
//    n = {2,8,16}; start = 0; goal = -1;
    //Run
    Solution k;
    cout << k.minimumOperations(n, start, goal);
}
