#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestSumAfterKNegations(vector<int>& nums, int k){
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() && nums[i] < 0 && k >0; i++){
        nums[i] *= -1;
        k--;
    }
    sort(nums.begin(), nums.end());
    if (nums[0]!=0&&k%2==1&&k>0) nums[0] *= -1;
    int res {0};
    for (auto i : nums)
        res += i;
    return res;
}

int main()
{
    vector<int> i {2,-3,-1,5,-4};
    cout << largestSumAfterKNegations(i, 2);
    return 0;
}
