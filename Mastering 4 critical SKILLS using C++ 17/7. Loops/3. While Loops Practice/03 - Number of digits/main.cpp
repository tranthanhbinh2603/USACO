#include <iostream>

using namespace std;

int main()
{
    int n, res;
    cin >> n;
    if (n == 0)
        res = 1;
    else
    if (n < 0)
        n = -n;
    while (n > 0){
        res++;
        n = n / 10;
    }
    cout << res;
    //Them truong hop max_int nua.
}
