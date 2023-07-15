#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll a, b; cin >> a >> b;
    ll ans {0};
    while (b > 0){
        if (b & 1) ans += a;
        a += a;
        b >>=1;
    }
    cout << ans;
}
