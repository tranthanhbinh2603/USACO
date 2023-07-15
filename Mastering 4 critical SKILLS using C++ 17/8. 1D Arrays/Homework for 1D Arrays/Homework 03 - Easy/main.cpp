#include <iostream>

using namespace std;

//Use only 1 single array
void func1()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] != a[i - 1]) cout << a[i] << " ";
}

//Without array
void func2()
{
    int n; cin >> n; int a; cin >> a; int pre_a = a;
    cout << a << " ";
    for (int i = 2; i <= n; i++)
    {
        cin >> a;
        if (pre_a != a) cout << a << " ";
        pre_a = a;
    }
}


int main()
{
    func2();
}
