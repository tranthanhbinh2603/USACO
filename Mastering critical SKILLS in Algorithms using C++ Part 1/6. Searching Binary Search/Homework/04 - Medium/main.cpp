#include <iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int st = 1, en = 50000, ans = 0;
        while (st < en){
            int md = st + (en - st + 1) / 2;
            int su = (md * (md + 1)) / 2;
            if (su <= n){
                ans = md;
                st = md + 1;
            }
            else en = md - 1;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.arrangeCoins(5);
    //cout <<
}
