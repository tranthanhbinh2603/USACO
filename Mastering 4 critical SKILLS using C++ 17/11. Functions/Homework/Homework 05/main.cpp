#include <iostream>

using namespace std;

void set_power(int a[], int len = 4, int m = 3){
    for (int i = 0; i < len; i++){
        if (i == 0) a[i] = 1;
        else{
            int res = 1;
            for (int z = 0; z < i; z++){
                res *= m;
            }
            a[i] = res;
        }
    }
}

int main()
{
    int a[100];
    set_power(a);
    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
}
