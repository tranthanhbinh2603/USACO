//https://oj.vnoi.info/problem/segtree_itez2
#include <iostream>
#include <climits>
using namespace std;

typedef long long ll;
const ll MAX = 1e5 + 5;
ll n, q;
ll type, a, b;
ll st[4 * MAX];

void update(ll id, ll l, ll r, ll i, ll val){
	if (l > i || r < i)
		return;
	if (l == r){
		st[id] = val;
		return;
	}
	ll mid = (l + r) / 2;
	update(id * 2, l, mid, i, val);
	update(id * 2 + 1, mid + 1, r, i, val);
	st[id] = st[id * 2] + st[id * 2 + 1];
}

ll get(ll id, ll l, ll r, ll st_f, ll en_f){
	if (l > en_f || r < st_f)
		return 0;
	if (l >= st_f && r <= en_f)
		return st[id];
	ll mid = (l + r) / 2;
	ll a1 = get(id * 2, l, mid, st_f, en_f);
	ll b1 = get(id * 2 + 1, mid + 1, r, st_f, en_f);
	return a1 + b1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> q;
	while (q--){
		cin >> type >> a >> b;
		if (type == 1)
			update(1, 1, n, a, b);
		else {
			cout << get(1,1,n,a,b) << "\n";
		}
	}
}

