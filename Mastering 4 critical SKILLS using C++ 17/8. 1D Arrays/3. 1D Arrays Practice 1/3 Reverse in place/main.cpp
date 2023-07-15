#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n / 2; i++){
        int last = n - i - 1;
        int temp = a[i];
        a[i] = a[last];
        a[last] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
