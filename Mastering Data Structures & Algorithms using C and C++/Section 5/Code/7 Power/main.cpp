#include <iostream>

using namespace std;

int power1(int n, int m)
{
    if (n == 0)
        return 1;
    return power1(n-1, m) * m;
}

int power2(int n, int m) //m^n
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power2(n / 2, m * m);
    else
        return power2((n - 1) / 2, m * m) * m;
}

int main()
{
    cout << power2(10,5) << endl;
    return 0;
}
