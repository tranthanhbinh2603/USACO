#include <iostream>

using namespace std;

//La ham: e^x = 1 + x/1! + x^2/2! + x^3/3! +.... + x^n / n!

double e(int x, int n) //n la do chinh xac
{
    static double r = 1, f = 1;
    double p;
    if (n == 0)
        return 1;
    p = e(x, n-1);
    r = r * x; //Luy thua
    f = f * n; //Giai thua
    return p + (r / f);
}


int main()
{
    cout << e(5,10) << endl;
    return 0;
}
