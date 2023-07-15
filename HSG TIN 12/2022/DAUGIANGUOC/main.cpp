#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("DAUGIANGUOC.INP", "r", stdin);
    freopen("DAUGIANGUOC.OUT", "w", stdout);

    int n; cin >> n;
    int hsh[1001]{0};
    for (int i = 0; i < n; i++){
        int k; cin >> k;
        hsh[k]++;
    }
    bool isFind = false;
    for (int i = 0; i <= 1000; i++){
        if (hsh[i] == 1){
            isFind = true;
            cout << i;
            break;
        }
    }
    if (!isFind) cout << "-1";
}
