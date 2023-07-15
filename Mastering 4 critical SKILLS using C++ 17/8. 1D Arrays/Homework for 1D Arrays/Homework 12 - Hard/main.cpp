#include <iostream>

using namespace std;

const long int MAX = 1e5;

int main()
{
    int n; cin >> n;
    long long int pre = 0;
    int arr[MAX] {0}; arr[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[pre - i - 1] == 1 || pre - i - 1 < 0) {
            arr[pre + i + 1] = 1;
            pre = pre + i + 1;
        }
        else
        {
            arr[pre - i - 1] = 1;
            pre = pre - i - 1;
        }
    }
    cout << pre;
}
