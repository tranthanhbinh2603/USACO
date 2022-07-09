#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += k * i;
    }
    cout << (sum - n > 0 ? sum - n : 0);
}
