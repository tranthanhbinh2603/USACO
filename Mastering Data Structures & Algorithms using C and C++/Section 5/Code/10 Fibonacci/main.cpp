#include <iostream>

using namespace std;

int fib[100];

int fib_loop(int n)
{
    int s0 = 0, s1 = 1, s = 0;
    if (n <= 1) return n;
    for (int i = 1; i < n; i++)
    {
        s = s0 + s1;
        s0 = s1;
        s1 = s;
    }
    return s;
}

//Thuat O(2^n)
int fib_recu_1(int n)
{
    if (n <= 2) return 1;
    return fib_recu_1(n - 1) + fib_recu_1(n - 2);
}

//Thuat O(n)
int fib_recu_2(int n)
{
    if (n <= 2) return 1;
    else
    {
        if (fib[n-2] == -1) fib[n-2] = fib_recu_2(n-2);
        if (fib[n-1] == -1) fib[n-1] = fib_recu_2(n-1);
        return fib[n-2] + fib[n-1];
    }
}

int main()
{
    cout << fib_loop(5) << endl;
    cout << fib_recu_1(5) << endl;
    //Setup mang fibonacci:
    for (int i = 0; i < 100; i++)
        fib[i] = -1;
    cout << fib_recu_2(6);
    return 0;
}
