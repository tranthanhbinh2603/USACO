#include<iostream>
#include<stack>
#include<climits>
#include <algorithm>
using namespace std;

typedef long long ll;
const ll MAX= 1e5 + 5;
ll n, a[MAX], l[MAX], r[MAX];
stack<ll> s;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll ans {-LLONG_MAX};
    for (ll i = 1; i <= n; i++){
        while (!s.empty() && a[i] > s.top())
            s.pop();
        s.push(a[i]);
        if (s.size() >= 2){
            ll k = s.top();
            s.pop();
            ans = max(ans, s.top() ^ k);
            s.push(k);
        }
    }
    reverse(a + 1, a + 1 + n);
    for (ll i = 1; i <= n; i++){
        while (!s.empty() && a[i] > s.top())
            s.pop();
        s.push(a[i]);
        if (s.size() >= 2){
            ll k = s.top();
            s.pop();
            ans = max(ans, s.top() ^ k);
            s.push(k);
        }
    }
    cout << ans;
}