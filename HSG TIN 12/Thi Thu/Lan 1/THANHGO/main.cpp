#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

typedef long long int ll;

int main()
{
    //freopen("data.inp", "r", stdin);
    int n; cin >> n;
    vector<ll> a, b, c;
    map<ll, ll> m_c;
    for (int i = 0; i < n; i++){
        int k; cin >> k;
        a.push_back(k);
    }
    for (int i = 0; i < n; i++){
        int k; cin >> k;
        b.push_back(k);
    }
    for (int i = 0; i < n; i++){
        int k; cin >> k;
        c.push_back(k);
        m_c[k]++;
    }
    int cnt {0};
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++)
        for (int z = 0; z < n; z++){
            if (binary_search(c.begin(), c.end(), sqrt(a[i] * a[i] + b[z] * b[z])))
                cnt+=m_c[sqrt(a[i] * a[i] + b[z] * b[z])];
            else if (binary_search(c.begin(), c.end(), sqrt(abs(a[i] * a[i] - b[z] * b[z]))))
                cnt+=m_c[sqrt(abs(a[i] * a[i] - b[z] * b[z]))];
        }
    cout << cnt;

}
