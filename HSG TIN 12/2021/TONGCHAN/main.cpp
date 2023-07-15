#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("TONGCHAN.INP", "r", stdin);
    freopen("TONGCHAN.OUT", "w", stdout);

    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long int sum {(a[0] % 2 == 0) ? a[0] : 0};
    long int max_sum {0};
    int s_max {0}, e_max{0}, s {0}, e{0};
    bool isFind = false, isStart = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] % 2 == 0){
            sum += a[i];
            if (isStart){
                isStart = false;
                s = i;
            }
        }
        else {
            e = i;
            if (sum > max_sum || isFind == false){
                max_sum = sum;
                s_max = s;
                e_max = e;
            }
            isFind = true; isStart = true;
            sum = 0;
        }
    }
    if (sum > max_sum && a[n - 1] % 2 == 0){
        max_sum = sum;
        s_max = s;
        e_max = n - 1;
    }
    cout << s_max + 1 << " " << e_max + 1;
}
