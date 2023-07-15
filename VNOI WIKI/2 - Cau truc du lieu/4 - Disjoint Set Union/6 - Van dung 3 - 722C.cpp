#include <iostream>
using namespace std;

typedef long long ll;
const ll MAX = 1e5 + 5;
ll a[MAX], sum[MAX], sz[MAX], ia[MAX], ip[MAX];
ll n;

void make(ll n){
	a[n] = n;
	sz[n] = 1;
	sum[n] = ia[n];
}

ll find(ll n){
	if (a[n] == n) return n;
	ll k = find(a[n]);
	a[n] = k;
	return k; 
}

void merge(ll a1, ll b1){
	a1 = find(a1);
	b1 = find(b1);
	if (a1 != b1){
		if (sz[a1] < sz[b1]) swap(a1, b1);
		a[b1] = a1;
		sz[a1] += sz[b1];
		sum[a1] += sum[b1];
	}
}
int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (ll i = 1; i <= n; i++) cin >> ia[i];
	for (ll i = 1; i <= n; i++) cin >> ip[i];
	for (ll i = 1; i <= n; i++) make(i);
	for (ll i = n; i >= 1; i--){
		
	}
}
