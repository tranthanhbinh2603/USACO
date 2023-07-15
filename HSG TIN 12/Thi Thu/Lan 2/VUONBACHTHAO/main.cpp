#include <iostream>

using namespace std;

int main()
{
    freopen("vuon.inp","r",stdin);
    freopen("vuon.out","w",stdout);
    int n, m, h; cin >> n >> m >> h;
    int arr[n][m], a_h[n][m];
    bool hsh[n][m];
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            hsh[i][z] = false;
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            cin >> arr[i][z];
    for (int i = 0; i < n; i++){ //Duyet theo hang
        a_h[i][0] = 1;
        for (int z = 1; z < m; z++)
            if (arr[i][z] == arr[i][z - 1])
                a_h[i][z] = a_h[i][z - 1] + 1;
            else
                a_h[i][z] = 1;
        int z = m - 1;
        while (z >= 0){
            if (a_h[i][z] >= h){
                int ma = a_h[i][z];
                for (int k = 0; k < ma; k++){
                    hsh[i][z] = true;
                    z--;
                }
            }
            else z--;
        }
    }
    for (int i = 0; i < m; i++){ //Duyet theo cot
        a_h[0][i] = 1;
        for (int z = 1; z < n; z++)
            if (arr[z][i] == arr[z-1][i])
                a_h[z][i] = a_h[z-1][i] + 1;
            else
                a_h[z][i] = 1;
        int z = n - 1;
        while (z >= 0){
            if (a_h[z][i] >= h){
                int ma = a_h[z][i];
                for (int k = 0; k < ma; k++){
                    hsh[z][i] = true;
                    z--;
                }
            }
            else z--;
        }
    }
    int cnt {0};
    for (int i = 0; i < n; i++){
        for (int z = 0; z < m; z++)
            if (hsh[i][z] == false && arr[i][z] != 0) cnt++;
    }
    cout << cnt;

}
