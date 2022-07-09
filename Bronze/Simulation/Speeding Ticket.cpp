#include <iostream>
#include <cstdio>
using namespace std;

int road[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    int length, speed; int longcurrent;
    for (int i = 0; i < n; i++)
    {
        cin >> length >> speed;
        for (int i = longcurrent; i < longcurrent + length; i++)
            road[i] = speed;
        longcurrent += length;
        length = 0; speed = 0;
    }

    longcurrent = 0; int res = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> length >> speed;
        for (int i = longcurrent; i < longcurrent + length; i++)
            if (speed - road[i] > res) res = speed - road[i];
        longcurrent += length;
        length = 0; speed = 0;
    }

    cout << res;
}
