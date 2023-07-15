#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void wiggleSort(vector<int> &nums){
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size() - 1; i+=2){
        swap(nums[i], nums[i+1]);
    }
}
int main()
{
    vector<int> a {6,6,5,6,3,8};
    wiggleSort(a);
    for (auto i : a)
        cout << i << "\n";
}
