#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <iomanip>
#include <map>
#include <stack>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int st = 1, en = num;
        while (st <= en){
            long long int mid = (st + en) / 2;
            if (mid * mid == num)
                return true;
            else if (mid * mid < num)
                st = mid + 1;
            else
                en = mid - 1;
        }
        return false;
    }
};


int main(){
    int n; cin >> n;
    Solution s;
    cout << s.isPerfectSquare(n);
}