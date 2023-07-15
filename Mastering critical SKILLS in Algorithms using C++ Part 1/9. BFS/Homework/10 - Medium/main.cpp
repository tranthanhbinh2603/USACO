#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

typedef long long LL;

class Solution{
public:
    set<LL> ans;
    queue<LL> q;
    set<LL> find_vaild(){
        for (LL i = 0; i <= 9; i++)
            q.push(i);
        while (!q.empty()){
            LL cur = q.front();
            q.pop();
            ans.insert(cur);
            if (cur > 10000000000 || cur == 0) continue;
            else {
                if (cur % 10 != 9) q.push(cur * 10 + (cur % 10) + 1);
                if (cur % 10 != 0) q.push(cur * 10 + (cur % 10) - 1);
            }
        }

        return ans;
    }

    vector<int> countSteppingNumbers(LL low, LL high){
        set<LL> f = find_vaild();
        vector<int> ans;
        for (auto i : f){
            if (i > high) break;
            if (i >= low) ans.push_back(i);
        }
        return ans;
    }
};

int main()
{
    //freopen("f.out", "w", stdout);
    Solution s;
    vector<int> v = s.countSteppingNumbers(0, 21);
    for (auto i : v)
        cout << i << " ";
}
