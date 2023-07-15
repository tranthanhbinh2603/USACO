#include <iostream>
#include <vector>
#include <climits>
using namespace std;

static const int ma = 50010;
int hsh[ma] {0};
int reductionOperations(vector<int>& nums) {
    for (int i = ma - 1; i > 0; i--)
        hsh[i] = 0;
    int mi {INT_MAX};
    for (auto i : nums){
        hsh[i]++;
        if (i < mi) mi = i;
    }
    long long int res{0}, temp{0};
    for (int i = ma - 1; i > mi; i--){
        if (hsh[i] > 0){
            temp += hsh[i];
            res += temp;
        }
        //cout << i << " " << hsh[i] << "\n";
    }
    return res;
}

int main()
{
    vector<int> a {1,1,1,1};
    cout << reductionOperations(a);
}
