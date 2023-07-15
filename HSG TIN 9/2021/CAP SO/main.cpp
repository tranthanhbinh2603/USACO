#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("CAU4.INP", "r", stdin);
    freopen("CAU4.OUT", "w", stdout);

    map<int,int> m;
    int n, s; cin >> n >> s;
    long long int res {0};
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        res += m[s - temp];
        m[temp]++;
    }
    cout<< res;
}
