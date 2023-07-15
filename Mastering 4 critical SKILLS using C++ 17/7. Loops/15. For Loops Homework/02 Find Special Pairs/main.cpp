#include <iostream>

using namespace std;

int main()
{
    int cnt;
    for (int i = 50; i <= 300; i++)
        for (int z = 70; z<=400; z++)
            if (i < z && (i + z) % 7 == 0) cnt++;
    cout << cnt;
}
