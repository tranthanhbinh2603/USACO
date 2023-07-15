#include <iostream>

using namespace std;

int main()
{
    //freopen("data.inp","r", stdin);
    int n; cin >> n;
    int hired {0}, res {0};
    for (int i = 0; i < n; i++)
    {
        int k; cin >> k;
        if (k != -1)
            hired += k;
        else
            if (hired > 0) hired --; else res ++;
    }
    cout << res;
}
