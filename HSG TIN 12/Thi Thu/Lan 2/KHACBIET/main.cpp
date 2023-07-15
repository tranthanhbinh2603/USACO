#include <iostream>
#include <climits>
using namespace std;

typedef long long int ll;

int main()
{
    freopen("kb.inp", "r", stdin);
    freopen("kb.out", "w", stdout);
    ll n; cin >> n;
    ll mi {INT_MAX};
    ll res {-INT_MAX};
    for (ll i = 0; i < n; i++){
        ll k; cin >> k;
        mi = min(mi, k);
        res = max(k - mi, res);
    }
    cout << res;
}
