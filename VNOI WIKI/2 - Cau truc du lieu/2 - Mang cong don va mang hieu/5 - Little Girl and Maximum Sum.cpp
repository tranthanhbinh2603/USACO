#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll n, q, l, r;
const ll MAX = 2e5 + 10;
ll a[MAX], pf[MAX];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> q;
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	for (ll i = 1; i <= n; i++)
		pf[i] = pf[i - 1] + a[i];
	ll ans {0};
	for (ll i = 1; i <= q; i++){
		cin >> l >> r;
		ans += pf[n] - pf[n - (r - l + 1)];
	}
	cout << ans;

}