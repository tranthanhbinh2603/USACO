#include <iostream>
#include <vector>

using namespace std;

template <typename ... args>
int unary_right(args ... a)
{
    return (a + ...);
}

template <typename ... args>
int binary_right(args ... a)
{
    return (a + ... + 20);
    //Neu cong 0 => Fix loi khong doi so
}

//Bai tap: Phep chia 4 loai va cho biet trai co bang phai khong
template <typename ... args>
double div(args ... a)
{
    return (1 / ... / a);
}

//Bai tap: push_back mot luong lon phan tu
template <typename ... args>
int push_back_vec(vector <int> v, args ... a){
    (v.push_back(a), ...);
}

int main()
{
    vector<int> a;
    push_back_vec(a, 1, 2, 3, 4);
}
