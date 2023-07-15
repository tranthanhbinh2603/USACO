#include <iostream>
#include <vector>
using namespace std;

vector<int> counting_sort(vector<int> &nums){
    vector<int> hsh(100000, 0);
    for (int i = 0; i < nums.size(); i++)
        hsh[nums[i] + 50000]++;
    vector<int> res;
    for (int i = 0; i < 100000; i++)
            for (int z = 1; z <= hsh[i]; z++)
                res.push_back(i - 50000);
    return res;
}

int main()
{
    vector <int> v {-5, 2, -3, 1, 1234, -2543};
    vector <int> a = counting_sort(v);
    for (auto i : a)
        cout << i << " ";
}
