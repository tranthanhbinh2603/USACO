//https://www.codechef.com/problems/DIVSUBS
#include <iostream>
#include <vector>
#include <map>
using namespace std;

//Cach giai: prefix sum + mod ((b - a) % c = 0 khi b % c = a % c) + STL

typedef long long ll;
void slove(){
    ll n; cin >> n; n++;
    vector<ll> arr (n), pf (n, 0); map<ll, vector<ll>> hsh;
    n--;
    for (ll i = 1; i <= n; i++){
        cin >> arr[i];
        pf[i] = arr[i] + pf[i - 1];
    }
    for (ll i = 1; i <= n; i++)
        pf[i] %= n;
    for (ll i = 1; i <= n; i++)
        hsh[pf[i]].push_back(i);
    if (hsh[0].size() > 0){
        cout << hsh[0][0] << "\n";
        for (ll i = 1; i <= hsh[0][0]; i++){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    for (ll i = 1; i <= n; i++){
        if (hsh[pf[i]].size() > 1){
            cout << hsh[pf[i]][1] - hsh[pf[i]][0] << "\n";
            for (ll z = hsh[pf[i]][0] + 1; z <= hsh[pf[i]][1]; z++)
                cout << z << " ";
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";
    return;
}

int main()
{
    freopen("d.inp", "r", stdin);
    int t; cin >> t;
    while (t--){
        slove();
    }
}
