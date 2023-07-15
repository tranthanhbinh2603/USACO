#include <iostream>

using namespace std;

int sumofN(int n)
{
    if (n == 0){
        return 0;
    }
    return sumofN(n - 1) + n;
}

int sumfor(int n)
{
    int r;
    for (int i = 0; i < n; i++)
        r += i;
    return r;
}

int main()
{
    cout << sumofN(10) << endl;
    return 0;
}
