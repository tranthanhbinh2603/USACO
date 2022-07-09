#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a,b,c,temp; int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        temp = a + b +c;
        if (temp >= 2) res++;
    }
    cout <<  res;
}
