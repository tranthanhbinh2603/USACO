#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BOCSOI.INP", "r", stdin);
    freopen("BOCSOI.OUT", "w", stdout);

    int n; cin >> n;
    string s; cin >> s;
    char pre = s[0];
    int res {0};
    for (int i = 1; i < n; i++){
        if (pre == s[i]) res++;
        pre = s[i];
    }
    cout << res;
    return 0;
}
