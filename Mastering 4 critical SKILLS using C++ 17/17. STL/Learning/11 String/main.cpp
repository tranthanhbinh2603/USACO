#include <iostream>

using namespace std;

int main()
{
    string a = "abc def ijk abc";

    //Chon tu a den cuoi day
    cout << a.substr(1) << endl;
    //Chon a den b ki tu
    cout << a.substr(1,3) << endl;

    //Tim chuoi
    cout << a.find("abc") << endl;
    cout << a.find("abc", 5) << endl; //Start from 5 + 1 letter
    cout << a.find("xyz") << endl;
    cout << (int)a.find("xyz") <<  endl;

    //Tim chuoi dau, cuoi chuoi
    cout << a.find_last_of("a") << endl;
    cout << (int)a.find_last_of("g") << endl;
    cout << a.find_last_of("fd") << endl;

    cout << a.find_first_of("a") << endl;

    cout << a.find_first_not_of("a") << endl;

    //Thay doi chuoi
    a.replace(4,3,"x");
    cout << a;
}
