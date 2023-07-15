#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int q; cin >> q;
    for (int i = 1; i <= q; i++){
        int n; cin >> n;
        vector<int> v (n);
        for (int i = 0; i < n; i++){
            int t; cin >> t;
            v.push_back(t);
        }
        cout << "Case " << i << ": " << *max_element(v.begin(), v.end()) << "\n";
    }
}
