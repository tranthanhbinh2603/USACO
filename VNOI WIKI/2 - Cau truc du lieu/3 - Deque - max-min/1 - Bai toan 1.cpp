#include <iostream>
#include <deque>
using namespace std;

typedef long long ll;
ll n, k, a[10005], r[10005];
deque<ll> d;

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >>n >> k;
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	for (ll i = 1; i <= n; i++){
		while (!d.empty() && a[d.back()] > a[i])
			d.pop_back();
		d.push_back(i);
		while (!d.empty() && d.front() + k <= i)
			d.pop_front();
		r[i] = a[d.front()];
	}
	for (ll i = k; i <= n; i++)
		cout << r[i] << "\n";
}