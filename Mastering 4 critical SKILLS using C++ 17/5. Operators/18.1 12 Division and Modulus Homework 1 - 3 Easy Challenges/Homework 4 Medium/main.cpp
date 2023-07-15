#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    bool is_oven1 = (num % 2 == 0);
    bool is_oven2 = (((double)num/2)-(num / 2) == 0);
    bool is_oven3 = ((num % 10 == 2) || (num % 10 == 4) || (num % 10 == 6) || (num % 10 == 8) || (num % 10 == 10));

    cout << is_oven1 << " " << is_oven2 << " " << is_oven3;
}
