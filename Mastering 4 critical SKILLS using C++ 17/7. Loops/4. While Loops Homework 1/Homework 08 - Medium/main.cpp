#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cou = 0;
    int ind = 0;
    while (true)
    {
        if ((cou % 3 == 0) && (cou % 4 != 0)){
            ind++;
            cout << cou << " ";
        }
        cou++;
        if (ind >= n) break;
    }
}
