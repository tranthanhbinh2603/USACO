#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    bool isVaild(vector<int> &bloomDay, int total_bouquets, int flowers_per_bouquet, int days){
        int cnt{0}; int bouquet {0};
        for (int i = 0; i < bloomDay.size(); i++)
        {
            //cout << bloomDay[i] << "\n";
            if (bloomDay[i] <= days) {
                cnt++;
                if (cnt == flowers_per_bouquet){
                    cnt = 0;
                    bouquet++;
                }
            }
            else {
                cnt = 0;
            }
        }
        //cout << bouquet << " " << days << "\n";
        if (bouquet >= total_bouquets) return true;
        else return false;
    }
    int minDays(vector<int> &bloomDay, int total_bouquets, int flowers_per_bouquet){
        int res {-1};
//        if (total_bouquets * flowers_per_bouquet > bloomDay.size())
//            return -1;
//        else{
            vector<int> cpb = bloomDay;
            sort(cpb.begin(), cpb.end());
            int st = cpb[0], en = cpb[cpb.size() - 1];
            while (st <= en){
                int md = st + (en - st) / 2;
                if (isVaild(bloomDay, total_bouquets, flowers_per_bouquet, md))
                    en = md - 1, res = md;
                else
                    st = md + 1;
            }
        //}
        return res;
    }
};

int main()
{
   Solution s;
   vector<int> bloomday{1,10,2,9,3,8,4,7,5,6};
   int m = 4, k = 2;
   cout << s.minDays(bloomday, m, k);
}
