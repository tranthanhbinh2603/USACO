#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isFirst = true;
    for (int i = 1; i <= n; i++)
    {
        bool isPrime = true;
        for (int z = 2; z < i; z++)
            if (i % z == 0){
                isPrime = false;
                break;
            }
        if (isPrime)
            if (isFirst){
                cout << i;
                isFirst = false;
            }
            else
                cout << ", " << i;
    }
}
