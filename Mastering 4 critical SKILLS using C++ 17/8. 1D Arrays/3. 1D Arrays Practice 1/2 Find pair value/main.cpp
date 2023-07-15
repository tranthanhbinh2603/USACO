#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_sum = 0;
    for (int i = 0; i < n; i++)
        for (int z = i + 1; z < n; z++)
            if (a[i] + a[z] > max_sum) max_sum = a[i] + a[z];
    cout << max_sum;
}
/*Tim phan tu lon thu nhat roi sau do tim phan tu lon thu hai. Chi vay thoi!*/
