#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool isInc = true;
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1]) isInc = false;
    if (isInc) cout << "YES"; else cout << "NO";
}
