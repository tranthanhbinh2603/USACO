//https://codeforces.com/contest/677/problem/A
#include <iostream>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int res {0};
    for (int i = 0; i < n; i++){
        int t; cin >> t;
        if (t <= k) res++; else res+=2;
    }
    cout << res << endl;
    return 0;
}
