#include <iostream>
#include <climits>
using namespace std;

typedef long long int ll;

ll cstc(ll a, ll b){
    if (b == 1)
        return a;
    ll res = cstc(a, b / 2);
    if (b % 2 == 0)
        return (res % 10 * res % 10) % 10;
    else
        return (a % 10 * res % 10 * res % 10) % 10;
}

int main()
{
    freopen("cstc.inp", "r", stdin);
    freopen("cstc.out", "w", stdout);
    ll a, b; cin >> a >> b;
    cout << cstc(a, b);
}
