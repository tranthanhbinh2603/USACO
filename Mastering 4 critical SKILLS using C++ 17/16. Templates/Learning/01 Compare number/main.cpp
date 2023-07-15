#include <iostream>

using namespace std;

template <typename type>
type compare_number(type a, type b){
    if (a > b) return a; else return b;
}

struct e1{};
int main()
{
    cout << compare_number(1.2, 2) << "\n";
    //e1 a, b;
    //cout << compare_number<e1>(a, b) << "\n";
    return 0;
}
