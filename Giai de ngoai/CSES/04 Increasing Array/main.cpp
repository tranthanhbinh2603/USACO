#include <iostream>

using namespace std;

int main()
{
    long long int ans {0};
    int n; cin >> n; int pre; cin >> pre;
    for (int i = 1; i < n; i++){
        int temp; cin >> temp;
        if (temp < pre) ans = ans + pre - temp;
        else pre = temp;
    }
    cout << ans;
}
