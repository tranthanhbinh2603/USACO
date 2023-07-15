#include<iostream>
#include <map>
using namespace std;

typedef long long ll;
const ll maxx = 1e5 + 10;
ll t, n, a[maxx], pf[maxx];
string s;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> s;
        for (ll i = 1; i <= n; i++)
            pf[i] = (int)(s[i - 1] - '0') - 1;
        ll cou {0}, sum {0};
        map<ll,ll> m;
        m[0] = 1;
        for (ll i = 1; i <= n; i++){
            sum += pf[i];
            cou += m[sum];
            m[sum]++;
        }
        cout << cou << "\n";
    }
}