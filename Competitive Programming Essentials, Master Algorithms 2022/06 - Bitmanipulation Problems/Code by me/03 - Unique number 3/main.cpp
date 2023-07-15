#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//PP giai chung cho cac bai toan xN + 1.
int main()
{
    freopen("d.inp", "r", stdin);
    int n; cin >> n;
    int x; cin >> x;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int k; cin >> k; a.push_back(k);
    }
    vector<int> cnt (32, 0);
    vector<int> b = a;
    for (int i = 0; i < n; i++){
        int cnt_temp = 0;
        while (b[i] > 0){
            cnt[cnt_temp] += (b[i] & 1);
            b[i] >>= 1;
            cnt_temp++;
        }
    }
    int ans {0};
    for (int i = 0; i < 32; i++){
        ans += (cnt[i] % x) * pow(2, i);
    }
    cout << ans;
}
