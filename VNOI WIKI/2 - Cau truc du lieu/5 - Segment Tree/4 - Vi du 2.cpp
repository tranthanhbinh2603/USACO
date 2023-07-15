#include <iostream>
using namespace std;

typedef long long ll;
const ll inf  = 1e9 + 7;
const ll maxN = 5e4 + 7;

struct node{
	ll pre, suf, sum, maxsum;

	static node def() {
		return {-inf, -inf, 0, -inf};
	}

	static node merge(const node &a, const node &b){
		node c;
		c.pre = max(a.pre, a.sum + b.pre);
		c.suf = max(b.suf, b.sum + a.suf);
		c.sum = a.sum + b.sum;
		c.maxsum = max(a.maxsum, b.maxsum);
		c.maxsum = max(c.maxsum, a.suf + b.pre);
		return c;
	}
};

ll n,m, a[maxN];
node st[4 * maxN];

void build(ll id, ll l, ll r){
	if (r == l){
		st[id] = {a[l], a[l], a[l], a[l]};
		return; 
	}
	ll m = (l + r) / 2;
	build(id * 2, l, m);
	build(id * 2 + 1, m + 1, r);
	st[id] = node::merge(st[id * 2], st[id * 2 + 1]);
}

node get(ll id, ll l, ll r, ll u, ll v){
	if (l > v || r < u) return node::def();
	if (l >= u && r <= v) return st[id];
	ll m = (l + r) / 2;
	node a = get(id * 2, l, m, u, v);
	node b = get(id * 2 + 1, m + 1, r, u, v);
	return node::merge(a, b);
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
    for (ll i = 1; i <= n; ++i) cin >> a[i];
    build(1, 1, n);
    cin >> m;
    while (m--) {
        ll x, y;
        cin >> x >> y;
        cout << get(1, 1, n, x, y).maxsum << '\n';
    }
}

