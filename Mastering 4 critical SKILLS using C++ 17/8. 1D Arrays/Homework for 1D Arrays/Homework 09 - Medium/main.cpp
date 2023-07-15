#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[10] {0};
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        while (temp > 0) {
            a[temp % 10]++;
            temp /= 10;
        }
    }
    for (int i = 1; i <= 9; i++)
        cout << i << " " << a[i] << "\n";
}
