#include <iostream>

using namespace std;

int main()
{
    int x, s1, e1, s2, e2, s3, e3;
    cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    int res = 0;
    if ((x - s1 >= 0) && (e1 - x >= 0)) res++;
    if ((x - s2 >= 0) && (e2 - x >= 0)) res++;
    if ((x - s3 >= 0) && (e3 - x >= 0)) res++;

    cout << res;
}
