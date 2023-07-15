#include<iostream>
#include <map>
using namespace std;
 
typedef long long ll;
const ll maxx = 2e5 + 10;
ll t,n, a[maxx], pf[maxx];
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    map<ll,ll> m;
    m[0] = 1;
    ll sum {0}, res {0};
    for (ll i = 1; i <= n; i++){
        sum += (a[i] + n) % n;
        sum = (sum + n) % n;
        res += m[sum];
        m[sum]++;
    }
    cout << res;
}
Input as text: