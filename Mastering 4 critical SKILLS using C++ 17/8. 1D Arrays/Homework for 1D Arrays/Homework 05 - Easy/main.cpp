#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int min = a[0] + a[1] + 2 - 1;
        for (int i = 0; i < n; i++)
            for (int z = i + 1; z < n; z++)
                if (a[i] + a[z] + (z + 1) - (i + 1) < min) min = a[i] + a[z] + (z + 1) - (i + 1);
        cout << min;
    }

}
