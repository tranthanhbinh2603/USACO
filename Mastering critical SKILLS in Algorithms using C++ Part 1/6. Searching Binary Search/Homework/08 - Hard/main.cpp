#include <iostream>

using namespace std;

class Solution{
public:
    bool k_missing(vector<int> n, int k, int idx)
    {
        int cnt_k = n[idx] - n[0] - idx;
        if (cnt_k > k)
            return true;
        else
            return false;
    }
    int missingElement(vector<int> &nums, int k){
        int st = 0, en = nums.size() - 1;
        int id_res {0};
        while (st <= en){
            int md = st + (en - st) / 2;
            if (k_missing(nums, k, md))
                id_res = md, en = md - 1;
            else
                st = md + 1;
        }
        return nums[0] + k + id_res - 1;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
