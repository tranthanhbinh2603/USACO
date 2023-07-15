#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("TONGCACSO.INP", "r", stdin);
    freopen("TONGCACSO.OUT", "w", stdout);

    string n; cin >> n;
    int res;
    for (int i = 0; i < n.size(); i++)
        res += (int)(n[i] - '0');
    cout << res;
}
