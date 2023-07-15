#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    ll a, b; cin >> a >> b; //a ^ b
    ll ans {1}, cnt {a};
    while (b > 0){
        if (b & 1) ans *= cnt, ans %= MOD;
        cnt *= cnt; cnt %= MOD;
        b >>= 1;
    }
    cout << ans;
}
