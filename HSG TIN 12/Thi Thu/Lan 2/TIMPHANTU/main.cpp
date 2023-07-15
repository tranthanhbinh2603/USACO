#include <iostream>
using namespace std;

typedef long long int ll;

int main()
{
    freopen("tpt.inp", "r", stdin);
    freopen("tpt.out", "w", stdout);
    ll n; cin >> n;
    ll a[n];
    ll sum {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    bool isFind = true;
    for (int i = 0; i < n; i++){
        if (a[i] == sum - a[i]){
            cout << a[i];
            isFind = false;
            break;
        }
    }
    if (isFind) cout << "N";

}
