#include <iostream>

using namespace std;

int main()
{
    int sum;
    int A[] = {1,3,4,45,5};

    for (auto x: A)
        sum += x;

    cout << sum << endl;
}
