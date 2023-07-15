#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Quy luat:
- Chon phan tu nho nhat trong day phan tu
- Chon 1 phan tu lam key
- Trao doi phan tu key voi phan tu nho nhat
*/

void selection_sort(vector <int> &v){
    for (int i = 0; i < v.size(); i++){
        int min1 {i};
        for (int j = i + 1; j < v.size(); j++)
            if (v[min1] > v[j]) min1 = j;
        swap(v[i], v[min1]);
    }
}
//Do phuc tap: Thoi gian o(n^2), khong gian: O(n)

int main()
{
    vector<int> v {5,3,1,2,4,9,8};
    selection_sort(v);
    for (auto i : v){
        cout << i << " ";
    }
}
