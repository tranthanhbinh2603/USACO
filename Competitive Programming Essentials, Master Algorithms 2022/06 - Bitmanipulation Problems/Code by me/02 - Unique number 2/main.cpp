#include <iostream>
#include <vector>
using namespace std;

//Suy luan 1 ti: 0 ^ 1 = 1, 1 ^ 1 = 0. Hai so luon hon kem nhau 1 bit
//Tu do ta co pp bitmasking
//- B1: Xor toan bo mang
//- B2: Tim pt co so 1 nho nhat tu trai sang phai
//- B3: Chia thanh 1 bo moi. No se the hien o code duoi
int main()
{
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int k; cin >> k; a.push_back(k);
    }
    //B1
    int mask {0};
    for (int i = 0; i < n; i++){
        mask = mask ^ a[i];
    }
    //B2:
    int cnt = 0;
    while ((mask & 1) == 0){
        cnt++;
        mask >> 1;
    }
    //B3:
    int mash_2 = (1 << cnt);
    int set1 = 0;
    int set2 = 0;
    for (int i = 0; i < n; i++){
        if ((a[i] & mash_2) > 0)
            set1 = set1 ^ a[i];
        else
            set2 = set2 ^ a[i];
    }
    cout << set1 << " " << set2;

}
