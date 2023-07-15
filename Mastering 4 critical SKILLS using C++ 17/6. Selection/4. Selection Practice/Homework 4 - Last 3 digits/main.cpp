#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 10000)
        cout << n << " is small number";
    else if (((n % 10) + (n / 10) % 10 + (n / 100) % 10) % 2 != 0)
        cout << n << " is great number";
    else if (((n % 10) % 2 != 0) || (((n / 10) % 10) % 2 != 0) || (((n / 100) % 10) % 2 != 0))
        cout << n << " is good number";
    else
        cout << n << " is bad number";

    //Meo: Dung truong hop !=0 phu hop cho ca so duong va so am
}
