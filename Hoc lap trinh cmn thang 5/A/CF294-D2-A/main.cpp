#include <iostream>

using namespace std;

int main()
{
    //freopen("d.inp", "r", stdin);
    int n; cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int m; cin >> m;
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        if (a == 1){
            arr[2] += arr[1] - b;
            arr[1] = 0;
        }
        else if (a == n){
            arr[n - 1] += b - 1;
            arr[n] = 0;
        }
        else {
            arr[a - 1] += b - 1;
            arr[a + 1] += arr[a] - b;
            arr[a] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << "\n";
}
