#include <iostream>

using namespace std;

template <typename ... args>
void a(args ... a1){
    cout << sizeof...(a1) << "\n";
}

template <typename ... args>
void a2(int a2, args ... a1){
    cout << sizeof...(a1) << "\n";
}

int sum_arr(){
    return 0;
}

template <typename ... args>
int sum_arr(int a2, args ... a1){
    return a2 + sum_arr(a1...);
}

void print(){
    cout << "\n";
}

template <typename ... args>
void print(int a2, args ... a1){
    cout << a2 << " ";
    print(a1...);
}

int main()
{
    a(1,2,3,4);
    a2(1,2,3,4);
    cout << sum_arr(1,2,3,4,10) << "\n";
    print(1,2,3,4);
    return 0;
}
