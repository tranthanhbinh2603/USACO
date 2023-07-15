#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n; int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int lower = 0, upper = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j){
                lower+=a[i][j];
                upper+=a[i][j];
            }
            else if (i < j) lower += a[i][j]; else upper+=a[i][j];
    cout << upper << "\n" << lower ;
}
