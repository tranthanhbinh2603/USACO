#include <iostream>

using namespace std;

double e(double x, double n)
{
    static double r;
    if (n == 0) return r;
    r = 1 + x / n * r;
    //r = 1 + x * r / n;
    return e(x, n - 1);
}

int main()
{
    cout << e(1,4) << endl;
    return 0;
}
