#include <iostream>

using namespace std;

int func(int n)
{
    if (n > 100){
        return n - 10;
    }
    else{
        return func(func(n + 11));
    }
}
int main()
{
    cout << func(10) << endl;
    return 0;
}
