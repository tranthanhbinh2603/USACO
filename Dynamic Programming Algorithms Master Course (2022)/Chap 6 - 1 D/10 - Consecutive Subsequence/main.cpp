#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef long long ll;
 
const int MAX = 1e5;
int a[MAX + 1], f[MAX + 1], t[MAX + 1], b[MAX + 1];
 
int bs(int x, int l, int r){
    int res = 0;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[b[m]] < x){
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
 
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("f.inp", "r", stdin);
    //freopen("f.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int f[n + 1] {0}, t[n + 1] {0};
    f[0] = 0; f[1] = 1; b[1] = 1; int res = 1;
    a[0] = INT_MAX;
    for (int i = 2; i <= n; i++){
        int zmax = bs(a[i], 1, i);
        f[i] = f[b[zmax]] + 1;
        t[i] = b[zmax];
        b[f[i]] = i;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (f[ans] < f[i]) ans = i;
    cout << f[ans] << "\n";
    stack<int> s;
    while (ans != 0){
        s.push(ans);
        ans = t[ans];
    }
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}