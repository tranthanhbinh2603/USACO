#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("data.inp","r", stdin);
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++){
        int c; cin >> c;
        v.push_back(c);
    }
    int ans_a {0}, ans_b {0}; int cnt {1};
    while (v.size() > 0){
        int num;
        if (v[0] > v[v.size() - 1])
        {
            num = v[0];
            v.erase(v.begin());
        }
        else{
            num = v[v.size() - 1];
            v.erase(v.end() - 1);
        }
        if (cnt % 2 != 0) ans_a += num; else ans_b += num;
        cnt++;
    }
    //cout << st << " " << en << "\n";
    cout << ans_a << " " << ans_b;
}
