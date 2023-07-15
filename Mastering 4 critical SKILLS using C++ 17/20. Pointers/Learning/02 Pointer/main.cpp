#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* b = &a; //b is address a
    cout << &a << " " << &b << " " << b << " " << *b << "\n";

    *b = 20;
    cout << a << "\n";

    ///NULL pointer
    int* c = nullptr;
    if (c == NULL)
        cout << "NULL!\n";

    //Pointer math
    int d {10}, e{20};
    int *f = &d, *g = &e;
    *f = 20;
    *g = *f + 5;
    cout << d << " " << e << "\n";

    f = g; //g is address e => value f = g = e. Value d is not rep
    cout << f << " " << g << "\n";
    *f = 50;
    cout << d << " " << e << " " << *f << " " << *g << "\n";

    f = &d, g = &e;
    *f = 20;
    *g = *f + 5;
    cout << *f << " " << *g << "\n";
    swap(*f, *g); //Bo sao di chi doi thu tu khong doi gia tri
    cout << d << " " << e << "\n";

    //point in other types
    string s = "1000";
    string* s1 = &s;
    *s1 = "aaaa";
    cout << s << "\n";

    //Y nghia con tro: Cap phat bo nho dong / danh sach lien ket /




}
