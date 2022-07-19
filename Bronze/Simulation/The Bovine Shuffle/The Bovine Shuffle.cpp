#include <iostream>
using namespace std;

int ArrN[100], ArrID[100], ArrRES[100];
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ArrN[i];
    for (int i = 0; i < n; i++)
        cin >> ArrID[i];

    for (int z = 1; z < 3; z++)
    {
        for (int i = 0; i < n; i++)
            ArrRES[ArrN[i] - 1] = ArrID[i];
        for (int i = 0; i < n; i++)
            ArrID[i] = ArrRES[i];
    }


    for (int i = 0; i < n; i++)
        cout << ArrRES[i] << "\n";
}
