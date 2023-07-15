#include <iostream>
using namespace std;

typedef long long ll;
const ll inf = 1e9 + 7;
const ll maxN = 1e5 + 7;
ll n, q, x, y, type;
ll a[maxN];
ll st[4 * maxN];

void build(ll id, ll l, ll r){
	if (l == r){
		st[id] = a[l];
		return;
	}

	ll m = (l + r) / 2;
	build(id * 2, l, m);
	build(id * 2 + 1, m +1, r);

	st[id] = min(st[id * 2], st[id * 2 + 1]);
}

void update(ll id, ll l, ll r, ll i, ll val){
	if (l > i || r < i)
		return;

	if (l == r){
		st[id] = val;
		return;
	}

	ll m = (l + r) / 2;
	update(id * 2, l, m, i, val);
	update(id * 2 + 1, m + 1, r, i, val);

	st[id] = min(st[id * 2], st[id * 2 + 1]);
}

ll get(ll id, ll l, ll r, ll st_f, ll en_f){
	if (l > en_f || r < st_f)
		return inf;

	if (l >= st_f && r <= en_f)
		return st[id];

	ll m = (l + r) / 2;
	ll a1 = get(id * 2, l, m, st_f, en_f);
	ll b1 = get(id * 2 + 1, m + 1, r, st_f, en_f);

	return min(a1, b1);
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (ll i = 1; i <= n; i++) cin >> a[i];
	build(1, 1, n);
	cin >> q;
	while (q--){
	 	cin >> type >> x >> y;
	    if (type == 1) update(1, 1, n, x, y);
	    else cout << get(1,1,n,x,y) << "\n";
	}
}