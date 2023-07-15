#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;
        int res = 0;
        while (i <= n){
            int k;
            cin >> k;
            int i2 = 1, res2 = 1;
            while (i2 <= i){
                res2 *= k;
                i2++;
            }
            res += res2;
            i++;
        }
        cout << res;
        res = 0;
    }

}
