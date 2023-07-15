#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> counting_sort(vector<int> &v){
    int min = *max_element(v.begin(), v.end()) - 500;
    int hsh[501]{0};
    for (int i = 0; i < v.size(); i++)
        hsh[v[i] - min]++;
    vector<int> res;
    for (int i = 1; i <= 500; i++)
        if (hsh[i] != 0)
            for (int z = 1; z <= hsh[i]; z++)
                res.push_back(i + min);
    return res;
}

int main()
{
    vector<int> k {10000107,10000035,10000001};
    vector<int> r = counting_sort(k);
    for (auto i : r){
        cout << i << " ";
    }
}
