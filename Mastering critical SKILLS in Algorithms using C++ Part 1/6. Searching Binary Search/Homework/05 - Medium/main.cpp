//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isSmallerThres(vector<int> &nums, int div, int threshold){
        int sum {0};
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i] / div + (nums[i] % div != 0);
        //cout << sum << " " << div << " " << threshold << "\n";
        if (sum <= threshold)
            return true;
        else
            return false;
    }
    int smallestDivisor(vector<int> &nums, int threshold) {
        sort(nums.begin(), nums.end());
        int st = 1, en = nums[nums.size() - 1], ans = 0;
        while (st <= en){
            int mid = st + (en - st) / 2;
            if (isSmallerThres(nums, mid, threshold))
                en = mid - 1, ans = mid;
            else
                st = mid + 1;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums {2,3,5,7,11};
    int threshold = 11;
    Solution s; cout << s.smallestDivisor(nums, threshold);
    //cout << ceil(7 / 3);
    //cout << s.isSmallerThres(nums,2,threshold);
}
