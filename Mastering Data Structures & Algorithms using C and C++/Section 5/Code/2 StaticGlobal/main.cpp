#include <iostream>

using namespace std;

//Dung static tuong duong voi dat bien o day:
//int a = 0;

int func1(int n)
{
    if (n > 0)
        return func1(n-1) + n;
    return 0;
}

//Su dung static
int func2(int n)
{
    static int a = 0; //Chi duoc cap phat 1 lan duy nhat, goi 2 lan = tang gia tri len
    if (n > 0){
        a++;
        return func2(n-1) + a;
    }
    return 0;

}

int main()
{
    cout << func1(5) << "\n";
    cout << func2(5) << "\n";
    cout << func2(5) << "\n";
    cout << func2(5) << "\n";
    cout << func2(5) << "\n";
    return 0;
}
