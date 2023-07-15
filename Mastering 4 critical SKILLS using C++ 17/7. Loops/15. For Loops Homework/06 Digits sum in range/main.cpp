#include <iostream>

using namespace std;

int main()
{
    int n, a, b, res_sum;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0, cpi = i;
        while (cpi > 0)
        {
            sum += cpi % 10;
            cpi /= 10;
        }
        if (a <= sum && sum <= b) res_sum += i;
    }
    cout << res_sum;
}
