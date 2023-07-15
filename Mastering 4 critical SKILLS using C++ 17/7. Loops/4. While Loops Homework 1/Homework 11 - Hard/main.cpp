#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int s1 = 1, s2 = 1;
    while (s1 <= n){
        while (s2 <= m){
            cout << s1 << " * " << s2 << " = " << s1 * s2 << "\n";
            s2++;
        }
        s2 = 1;
        s1++;
    }
}
