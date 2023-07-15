#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("in.inp", "r", stdin);
    int n; cin >> n;
    vector<int> v;
    while (n--){
        int k; cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";
}
