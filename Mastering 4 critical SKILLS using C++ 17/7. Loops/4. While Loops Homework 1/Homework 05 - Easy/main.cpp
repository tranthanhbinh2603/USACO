#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int index = 0;
    int sum_odd = 0, ind_odd = 0, sum_even = 0, ind_even = 0;
    while (n--)
    {
        int a;
        cin >> a;
        index++;
        if (index % 2 != 0){
            sum_odd += a;
            ind_odd++;
        }
        else {
            sum_even += a;
            ind_even++;
        }
    }
    cout << sum_odd / ind_odd << " " << sum_even / ind_even <<"\n";
}
