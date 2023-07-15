#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    bool isHeated(vector<int> &houses, vector<int> &heaters, int Rad){
        int idx_heaters {0}, idx_houses{0};
        while (heaters.size() > idx_heaters && idx_houses < houses.size()){
            //cout << idx_heaters << " " << idx_houses << " " << houses[idx_houses] << " " << heaters[idx_heaters] + Rad << " " << heaters[idx_heaters] - Rad <<"\n";
            if (houses[idx_houses] >= heaters[idx_heaters] - Rad && houses[idx_houses] <= heaters[idx_heaters] + Rad)
                idx_houses++;
            else
                idx_heaters++;
        }
        if (idx_houses == houses.size()) return true;
        else return false;
    }
    int findRadius(vector<int> &houses, vector<int> &heaters){
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int st = 1, en = houses[houses.size() - 1], res {0};
        while (st <= en){
            int md = st + (en - st) / 2;
            if (isHeated(houses, heaters, md))
                en = md - 1, res = md;
            else
                st = md + 1;
        }
        return res;
    }

};

int main()
{
    vector<int> houses {1,2,3,4};
    vector<int> heat {1,4};
    Solution s;
    cout << s.findRadius(houses, heat);
}
