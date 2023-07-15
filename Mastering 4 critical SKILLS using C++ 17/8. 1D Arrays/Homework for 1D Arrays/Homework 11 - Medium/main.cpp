#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[501] {0};
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp; a[temp]++;
    }
    for (int i = 0; i <= 500; i++)
    {
        if (a[i] != 0)
            for (int z = 0; z < a[i]; z++)
                cout << i << " ";
    }
}
