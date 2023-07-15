#include <iostream>
#include <deque>
using namespace std;

typedef long long ll;
ll n, k, sum, a[10005], f[10005];
deque<ll> d;

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >>n >> k;
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	d.push_back(0);
	for (ll i = 1; i <= n + 1; i++){
		while (!d.empty() && d.front() + k < i)
			d.pop_front();
		f[i] = a[i] + f[d.front()];
		sum += a[i];
		while (!d.empty() && a[d.back()] > a[i])
			d.pop_back();
		d.push_back(i);
		
	}
	cout << sum - f[n + 1];
}