#include <iostream>
#include "struct3.h"
using namespace std;

struct str1{
    int s = 0;
    str1();
    str1(int k){
        s = k;
    }
    void print()
    {
        cout << s << "\n";
    }
};

struct str2{
    int s = 0;
    str2();
    str2(int n);
    void print();
};

str2::str2(int _n){
    s = _n;
}
void str2::print()
{
    cout << s << "\n";
}

int main()
{
    str1 i (100);
    i.print();
    str2 i2 (200);
    i2.print();
    str3 i3 (300);
    i3.print();
    s3 -> print();
}
