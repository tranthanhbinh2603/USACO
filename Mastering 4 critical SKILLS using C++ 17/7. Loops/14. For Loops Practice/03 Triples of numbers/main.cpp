#include <iostream>

using namespace std;

int main()
{
    int n, m, k, cnt;
    cin >> n >> m >> k;

    //Cach 1:
//    for (int i = 1; i <= n; i++)
//        for (int z = i; z <= m; z++)
//           for (int j = 1; j <= k; j++)
//                if (i + z <= j) cnt++;
//    cout << cnt;

    //Cach 2:
    //Bo vong lap cuoi di, vi neu cong no ra nghiem tong so nghiem la cuoi - tong + 1

    //Xem them hinh duoi
    //Gia su hai so cong la 1 va 2, vay thi no la 3, nghiem cua no sẽ la 3, 4, 5, ... , vo han.

    for (int i = 1; i <= n; i++)
        for (int z = i; z <= m; z++)
        {
            int j = i + z;
            if (1 <= j && j <= k) cnt += k - j + 1;
        }
    cout << cnt;
}
