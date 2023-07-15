#include<iostream>
#include <map>
using namespace std;

typedef long long ll;
const ll maxx = 2e5 + 10;
ll t,n, a[maxx], pf[maxx];
map<ll,ll> m;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> t;
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
        pf[i] = pf[i - 1] + a[i];
    }
    ll res = 0, sum = 0;
    // for (ll i = 1; i <= n; i++)
    //     for (ll j = i; j <= n; j++)
    //         if (pf[j] - pf[i - 1] == t)
    //             {res++;}
    m[0] = 1;
    for (ll i = 1; i <= n; i++){
        sum += a[i];
        res += m[sum - t];
        m[sum]++;
    }
    cout << res;
}