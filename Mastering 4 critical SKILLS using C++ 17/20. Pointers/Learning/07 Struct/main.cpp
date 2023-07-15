#include <iostream>
#include <vector>
using namespace std;

struct test{
    int id {0};
    string str {""};

    test(){}

    test(int a, string b){
        id = a;
        str = b;
    }

    void print()
    {
        cout << id << " " << str << "\n";
    }
};

int main()
{
    test t(10, "AAAA");
    t.print();

    //Do u want to write t = new (....)
    //Using pointer
    test *t2 = new test(10, "CCCCCC");
    t2->print();

    //point struct same point normal
    test *t3 = t2;
    test *t4 = &t;
    t3->print(); t4->print();

    cout << "\n";

    //Vector point struct
    //Using same
    vector<test> v;
    //by
    vector<test*> v2;
    v2.push_back(&t);
    v2.push_back(t3);
    for (auto i : v2)
        i->print();

    delete t2, t3, t4;
}
