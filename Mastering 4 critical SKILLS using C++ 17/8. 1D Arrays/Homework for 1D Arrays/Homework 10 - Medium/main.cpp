#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[501] {0}; int b[n];
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        if (a[temp] == 0) {cout << temp << " "; a[temp] = 1;}
    }
}
