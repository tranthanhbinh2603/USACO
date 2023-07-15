#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int is_1 = (b + 1) / 2; //-1 ra 0, 1 ra 1
    int is_neg_1 = 1 - is_1; //-1 ra -1, 1 ra 0
    cout << a * a * is_1 + 2 * a + 1 * is_neg_1;
}
