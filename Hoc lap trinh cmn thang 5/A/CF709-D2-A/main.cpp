#include <iostream>

using namespace std;

int main()
{
    //freopen("d.inp","r", stdin);
    int cou {0}; int cou_b {0};
    int n, b, d; cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        int s; cin >> s;
        if (s <= b) cou_b += s;
        if (cou_b > d){
            cou_b = 0;
            cou++;
        }
    }
    cout << cou;
}
