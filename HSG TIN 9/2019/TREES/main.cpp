#include <iostream>
#include <cstdio>
using namespace std;

const int ma = 1e7;
int a[ma];

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("TREES.INP", "r", stdin);
    freopen("TREES.OUT", "w", stdout);

    int n; cin >> n;
    cin >> a[0]; int mi {a[0]};
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < mi) mi = a[i];
    }
    long int res {0};
    for (int i = 0; i < n; i++)
    {
        res += a[i] - mi;
    }
    cout << res;
}
