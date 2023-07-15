#include <iostream>
#include <vector>
using namespace std;

int inc1(int a)
{
    a++;
}

int inc2(int &a)
{
    a++;
}

int main()
{
    int a = 10;
    int &b = a; //address b assign for a
    b = 100;
    cout << a << "\n";
    cout << &b << " " << &a << "\n";

    int c = 200;
    //&b = c; //Khong the xay ra

    inc1(a);
    cout << a << "\n";
    inc2(a);
    cout << a << "\n";

    //Point in vector
    vector<int> a1; a1.push_back(1); a1.push_back(2);
    for (auto &i : a1){
        i++;
    }
    for (auto i : a1)
        cout << i << " ";

}
