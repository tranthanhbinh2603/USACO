#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arrayPairSum(vector<int> &nums)
{
    int kq {0};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i+=2)
        kq += nums[i];
    return kq;
}

int main()
{
    vector<int> a {6,2,6,5,1,2};
    cout << arrayPairSum(a);
}
