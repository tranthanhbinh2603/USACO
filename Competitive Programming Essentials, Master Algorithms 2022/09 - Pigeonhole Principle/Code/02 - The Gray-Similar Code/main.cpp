//https://www.codechef.com/problems/GRAYSC
#include <iostream>
#include <unordered_map>

using namespace std;
typedef unsigned long long ull;

int main()
{
    freopen("d.inp", "r", stdin);
    int n; cin >> n;

    ull arr[n];
    unordered_map<ull, int> hsh;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    //for (int i = 0; i < n; i++)
    //    cout << arr[i] << " " << hsh[arr[i]] << "\n";
    bool isFind = false;
    if (n >= 130){
        cout << "Yes";
        isFind = true;
    }
    else {
        for (int i = 0; i < n; i++)
        for (int z = 0; z < n; z++)
        for (int k = 0; k < n; k++){
            ull t = arr[i]^arr[z]^arr[k];
            if (!isFind && hsh[t] > 1){
                cout << "Yes";
                isFind = true;
                break;
            }

        }
    }
    if (isFind == false) cout << "No";
}
