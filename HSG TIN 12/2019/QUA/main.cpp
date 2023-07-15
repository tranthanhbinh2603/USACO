#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("QUA.INP", "r", stdin);
    freopen("QUA.OUT", "w", stdout);

    int m, n, k; cin >> m >> n >> k;
    vector<int> cake, candy;
    for (int i = 0; i < m; i++){
        int temp; cin >> temp;
        cake.push_back(temp);
    }
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        candy.push_back(temp);
    }
    sort(cake.begin(), cake.end());
    sort(candy.begin(), candy.end());
    int kq {0};
    if (n < m){ //Banh lon hon keo -> for keo
        for (int i : candy){
            if (i > k)
                break;
            else {
                int fi = k - i;
                auto ik = upper_bound(cake.begin(), cake.end(), fi);
                if (cake[(ik - 1) - cake.begin()] + i <= k){
                    kq++;
                    cake.erase(ik - 1);
                }
            }
        }
    }
    else { //Keo lon hon banh -> for banh
        for (int i : cake){
            if (i > k)
                break;
            else {
                int fi = k - i;
                auto ik = upper_bound(candy.begin(), candy.end(), fi);
                if (candy[(ik - 1) - candy.begin()] + i <= k){
                    kq++;
                    candy.erase(ik - 1);
                }
            }
        }

    }
    cout << kq;
}
