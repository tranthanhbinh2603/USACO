//https://vnoi.info/wiki/algo/data-structures/disjoint-set-union.md#l%C6%B0u-th%C3%AAm-th%C3%B4ng-tin-kh%C3%A1c-cho-m%E1%BB%97i-t%E1%BA%ADp-h%E1%BB%A3p:~:text=v%5D%3B%0A%7D-,B%C3%A0i%20to%C3%A1n%20x%E1%BA%BFp%20h%C3%A0ng,-B%C3%A0i%20to%C3%A1n
#include <iostream>
using namespace std;

typedef long long ll;
ll a[1005], size1[1005], max1[1005];

void create_set(ll n){
	a[n] = n;
	size1[n] = 1;
	max1[n] = n;
}

int find_set(ll n){
	if (a[n] == n) return n;
	ll k = find_set(a[n]);
	a[n] = k;
	return k;
}

void merge_set(ll a1, ll b1){
	ll a2 = find_set(a1);
	ll b2 = find_set(b1);
	if (a2 != b2){
		if (size1[a2] < size1[b2]) swap(a1, b2);
		a[b2] = a2;
		size1[a2] += size1[b2];
		max1[a2] = max(max1[a2], max1[b2]);
	}
}

int return_max(ll n){
	n = find_set(n);
	return max1[n];
}


int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n, q; cin >> n >> q;
	for (ll i = 1; i <= n; i++)
		create_set(i);
	while (q--){
		ll t; cin >> t;
		merge_set(t, t+1);
	}
	for (ll i = 1; i <= n; i++)
		 cout << return_max(i) << " ";
}