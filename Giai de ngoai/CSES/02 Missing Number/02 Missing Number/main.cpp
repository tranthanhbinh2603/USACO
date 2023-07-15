#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n; bool hsh[n + 1];
    for (int i = 1; i <= n; i++)
        hsh[i] = false;
    for (int i = 0; i < n - 1; i++)
    {
        int temp; cin >> temp;
        hsh[temp] = true;
    }

    for (int i = 1; i <= n; i++)
        if (hsh[i] == false){
            cout << i;
            break;
        }
}
