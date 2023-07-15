#include <iostream>
#include <vector>
using namespace std;

//PP: a ^ b ^ a = b
//Suy ra voi 1 day, luon xuat hien day xor voi gia tri ton tai duy nhat la gia tri nho nhat trong mang
int main()
{
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int k; cin >> k; a.push_back(k);
    }
    int ans {0};
    for (int i = 0; i < n; i++){
        ans = ans ^ a[i];
    }
    cout << ans;
}
