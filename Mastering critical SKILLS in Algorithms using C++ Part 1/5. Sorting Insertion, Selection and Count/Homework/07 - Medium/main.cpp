#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

bool check_pri(int a, int b, int c)
{
    if (a + b > c && a + c > b && c + b > a)
        return true;
    else
        return false;
}

int largestPerimeter(vector<int>& nums){
    int ma = {-INT_MAX};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
        if (check_pri(nums[i], nums[i+1], nums[i+2]))
            if (nums[i] + nums[i+1] + nums[i+2])
                ma = nums[i] + nums[i+1] + nums[i+2];
    return ma;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
