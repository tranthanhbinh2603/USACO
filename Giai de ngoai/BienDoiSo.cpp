#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long res = 0;
    cin >> n;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            res++;
        }
        else
        {
            n = (n * 3) + 1;
            res++;
        }
    }
    cout << res << " ";
}
