#include <iostream>

using namespace std;

int main()
{
    //freopen("r.inp", "r", stdin);
    int k, r; cin >> k >> r;
    int cnt {1};
    while (k * cnt % 10 != r && k * cnt % 10 != 0){
        cnt++;
    }
    cout << cnt;
}
