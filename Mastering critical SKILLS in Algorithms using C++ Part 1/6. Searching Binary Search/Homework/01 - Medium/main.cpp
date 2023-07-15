//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> searchRange(vector<int> &v, int target){
    vector<int> a {-1, -1};
    if (binary_search(v.begin(), v.end(), target)){
        pair<vector<int>::iterator,vector<int>::iterator> p = equal_range(v.begin(), v.end(), target);
        a = {}; a.push_back(p.first - v.begin()); a.push_back(p.second - v.begin() - 1);
    }
    return a;
}

int main()
{
    vector<int> v {5,7,7,8,8,8,8,10};
    int tar = 8;
    vector<int> h = searchRange(v, tar);
    for (auto i : h)
        cout << i << " ";
}
