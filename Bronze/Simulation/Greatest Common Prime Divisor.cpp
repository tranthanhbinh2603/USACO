#include <iostream>
#include <math.h>
using namespace std;

bool mark[1000000];
bool isPrime(int n)
{
    if (n <= 1) return false;
    int a = 2;
    while (true) {
        if (a*a > n) break;
        int p = a*a;
        while (p <= n) {
            mark[p] = true;
            p += a;
        }
        ++a;
        while (a <= n && mark[a]) ++a;
        if (a > n) break;
    }
    return (mark[n]) ? false : true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //cout << greatestCommonPrimeDivisor(100,140);
    cout << isPrime(5000);
}
