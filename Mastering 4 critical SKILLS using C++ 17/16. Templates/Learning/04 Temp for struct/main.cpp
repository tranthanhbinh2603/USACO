#include <iostream>

using namespace std;

template <class T>
struct MyStruct{
    T a[1000];
    int pos;

    MyStruct(){pos = 0;}

    void add_ele(T n){
        a[pos++] = n;
    }

    void print(){
        for (int i = 0; i < pos; i++)
            cout << a[i] << " ";
    }
};

//Them size vao template
template <class T, int size>
struct MyStruct2{
    T a[size];
    int pos;

    MyStruct(){pos = 0;}

    void add_ele(T n){
        a[pos++] = n;
    }

    void print(){
        for (int i = 0; i < pos; i++)
            cout << a[i] << " ";
    }
};

int main()
{
     MyStruct<string> st1;
     st1.add_ele("Hacker");
     st1.add_ele("Rank");
     st1.print();
}
