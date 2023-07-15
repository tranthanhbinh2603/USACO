#include <iostream>

using namespace std;

class Solution{
    int count_less(int r, int c, int val, int k){
        int cnt {0};
        for (int i = 1; i <= r; i++)
            cnt += min(val / i, c);
        return cnt <= k;
    }
    int findKthNumber(int m, int n, int k){
        int st = 1, en = n * m, res {-1};
        while (st < en){
            int md = st + (en - st) / 2;
            if (count_less(m, n, val, k))
                en = md - 1, res = md;
            else
                st = md + 1;
        }
        return res;
    }
};
int main()
{

}
