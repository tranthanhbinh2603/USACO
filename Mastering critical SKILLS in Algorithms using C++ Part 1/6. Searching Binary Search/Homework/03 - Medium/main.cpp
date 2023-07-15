#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int triangleNumber(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int res {0};
    for (int i = 0; i <= nums.size() - 2; i++)
    for (int z = i + 1; z <= nums.size() - 1; z++){
        auto it = lower_bound(nums.begin() + z + 1, nums.end(), nums[i] + nums[z]);
        res += it - nums.begin() - z - 1;
    }
    return res;
}

int main()
{
    vector<int> v {1,2,3};
    cout << triangleNumber(v);
}
