#include <iostream>

using namespace std;

class Solution{
public:
    int mySqrt(int x){
        double st = 0, en = 47000;
        double eps = 1e-10;
        while (en - st > eps){
            double md = st + (en - st) / 2.0;
            if (md * md < x)
                st = md;
            else
                en = md;
        }
        //cout << st << " " << en << "\n";
        return st + eps; //WHY?
    }
};

int main()
{
    Solution s;
    cout << s.mySqrt(4) << "\n";
    cout << s.mySqrt(20) << "\n";
    cout << s.mySqrt(8) << "\n";
}
