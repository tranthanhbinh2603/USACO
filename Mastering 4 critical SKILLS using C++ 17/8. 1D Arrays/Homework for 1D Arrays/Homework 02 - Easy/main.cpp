#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int nmin = a[0], nmax = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < nmin) nmin = a[i];
        if (a[i] > nmax) nmax = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == nmin) a[i] = nmax; else
            if (a[i] == nmax) a[i] = nmin;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
