#include <iostream>
#include <map>
using namespace std;

int main()
{
    //freopen("d.inp", "r", stdin);
    map<int, int> m;
    int n, t; cin >> n >> t;
    long long int cnt {0};
    for (int i = 0; i < n; i++){
        int k; cin >> k;
        cnt = cnt + m[t - k];
        m[k]++;
    }
    cout << cnt;
}
