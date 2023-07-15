#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    freopen("t.inp", "r", stdin);
    int n; cin >> n;
    vector<int> v;
    while (n--){
        int n; cin >> n;
        v.push_back(n);
    }
    int k; cin >> k;
    cout << binary_search(v.begin(), v.end(), k);
}
