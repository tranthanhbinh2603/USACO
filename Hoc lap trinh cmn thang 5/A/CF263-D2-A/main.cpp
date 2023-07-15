#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //freopen("in.inp", "r", stdin);
    int csx {0}, csy {0};
    for (int i = 0; i < 5; i++)
        for (int z = 0; z < 5; z++){
            int a; cin >> a;
            if (a == 1){
                csx = i;
                csy = z;
                break;
            }
        }
    //cout << csx << " " << csy << " ";
    cout << abs(csx - 2) + abs(csy - 2);
}
