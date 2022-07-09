#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1, m1, c2, m2, c3, m3;

    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;


    for (int i = 1; i <= 33; i++)
    {
        int temp = m1 + m2;
        m1 = temp - c2 > 0 ? temp - c2 : 0;
        m2 = temp - m1;
        temp = m2 + m3;
        m2 = temp - c3 > 0 ? temp - c3 : 0;
        m3 = temp - m2;
        temp = m3 + m1;
        m3 = temp - c1 > 0 ? temp - c1 : 0;
        m1 = temp - m3;
    }
    int temp = m1 + m2;
    m1 = temp - c2 > 0 ? temp - c2 : 0;
    m2 = temp - m1;
    cout << m1 << "\n" << m2 << "\n" << m3;
}

