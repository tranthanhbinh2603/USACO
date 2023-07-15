#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> res; int mi {INT_MAX};
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] - arr[i - 1] < mi || mi == INT_MAX)
        {
            res = {};
            mi = arr[i] - arr[i - 1];
            vector<int> a {arr[i-1], arr[i]};
            res.push_back(a);
        }
        else if (arr[i] - arr[i - 1] == mi)
        {
            vector<int> a {arr[i-1], arr[i]};
            res.push_back(a);
        }
    return res;
}

int main()
{
    vector<int> a {4,2,1,3};
    vector<vector<int>> b = minimumAbsDifference(a);
    for (auto i : b){
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
}
