#include <iostream>

using namespace std;

typedef long long int ll;

int main()
{
    ll n; cin >> n;
    ll cnt_c {0}, cnt_l {0};
    for (ll i = 0; i < n; i++){
        ll t; cin >> t;
        if (t % 2 == 0) cnt_c++; else cnt_l++;
    }
    if (cnt_l % 2 == 0){
        cout << (cnt_l * (cnt_l - 1)) / 2 + (cnt_c * (cnt_c - 1)) / 2;
    }
    else {
        cout << cnt_c * cnt_l;
    }
}
