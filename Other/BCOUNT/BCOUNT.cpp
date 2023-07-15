/*Dem so luong chu so*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string in;
    getline(cin, in);

    int res[10];
    for (int i = 0; i < 10; i++)
        res[i] = 0;

    for (int i = 0; i < in.length(); i++)
        if (isdigit(in[i]))
            res[(int)in[i] - 48]++;

    for (int i = 0; i < 10; i++)
        cout << res[i] << " ";
}
