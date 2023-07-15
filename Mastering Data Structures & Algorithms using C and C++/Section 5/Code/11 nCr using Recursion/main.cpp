#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 1) return 1;
    return fact(n - 1) * n;
}

int nCr_1(int n, int r)
{
    int num, den;

    num = fact(n);
    den = fact(r) * fact (n - r);

    return num/den;
}

int nCr_2(int n, int r)
{
    if ((r == 0) || (n == r))
        return 1;
    return nCr_2(n-1, r-1) + nCr_2(n - 1, r);
}

int main()
{
    cout << nCr_1(5,1) << endl;
    cout << nCr_2(5,1) << endl;
    return 0;
}
