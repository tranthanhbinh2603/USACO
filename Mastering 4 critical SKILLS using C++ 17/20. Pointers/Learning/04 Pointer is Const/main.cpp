#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    //Const binh thuong
    const int con = 100;

    //Cach 1:
    const int* ptr1 = &a;
    //*ptr1 = 20 //Khong the lam cai nay
    ptr1 = &b;
    ptr1 = &con;

    //Cach 2: Dao int* len truoc
    int* const ptr2 = &a;
    *ptr2 = 100;
    cout << a;
    //ptr2 = &b //khong duoc.
    //ptr2 = &c //Khong duoc.

    //Cach 3: Them const truoc cai thu 2
    const int* const ptr3 = &a;
    //*ptr3 = 200 //Khong duoc
    //*ptr3 = &b //Khong duoc
}
