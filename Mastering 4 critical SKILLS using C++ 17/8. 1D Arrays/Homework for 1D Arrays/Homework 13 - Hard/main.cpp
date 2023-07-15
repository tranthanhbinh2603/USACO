#include <iostream>

using namespace std;

int main()
{
    int k, n; cin >> k >> n;
    int pf[n + 10]; pf[0] = 0;
    for (int i = 1; i <= n; i++){
        int temp; cin >> temp;
        pf[i] = pf[i-1] + temp;
    }
    int max = pf[k], st = 1, en = k;
    for (int i = k + 1; i <= n; i++){
        if (pf[i] - pf[i - k] > max) {
            st = i - k;
            en = i - 1;
            max = pf[i] - pf[i-k];
        }
    }
    cout << st << " " << en << " " << max;
}
