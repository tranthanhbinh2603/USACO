#include <iostream>

using namespace std;

typedef long long int ll;

int main()
{
    //freopen("d.inp", "r", stdin);
    ll n, x; cin >> n >> x;
    ll cnt {0};
    for (ll i = 0; i < n; i++){
        char c; ll d; cin >> c >> d;
        if (c == '+'){
            x += d;
        }
        else {
            if (x - d < 0) cnt++;
            else x -= d;
        }
    }
    cout << x << " " << cnt;
}
