#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n; int pre, res = 0, k = 1; cin >> pre;
    for (int i = 1; i < n; i++)
    {
        int temp; cin >> temp;
        if (temp < pre) {
            res += (k * (k+1)) / 2;
            k = 1;
        }
        else k++;
        pre = temp;
    }
    res += (k * (k+1)) / 2;
    cout << res;
}
