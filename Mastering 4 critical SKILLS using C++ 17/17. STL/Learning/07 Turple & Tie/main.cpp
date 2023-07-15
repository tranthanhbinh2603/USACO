//Mot so noi dung khac minh se bo qua
#include <iostream>

using namespace std;

int main()
{
    tuple <char, int, string> t1;
    t1 = make_tuple('a', 2, "abc");
    cout << get<0>(t1) << " " << get<1>(t1) << "\n";
    set<0>(t1) = 10;
    cout << get<0>(t1) << " " << get<1>(t1) << "\n";

}
