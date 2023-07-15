#include <iostream>

using namespace std;

int main()
{
    int a, b, SUM, cnt = 0;
    cin >> a >> b >> SUM;
    //Chuong trinh 1: Chua toi uu:
//    for (int i = 1; i <= a; i++)
//        for (int z = 1; z <= b; z++)
//            if (i + z == SUM)
//                cnt++;
//    cout << cnt;
    //Try: 1000000 1000000 1000000. den tet cong go moi xong

    //Chuong trinh 2: Toi uu:
    //Vi a + b = sum. Nen b = sum - a. Neu vung b can tim nho hon so b ban dau thi do la nghiem.
    for (int i = 1; i <= a; i++)
    {
        int j = SUM - i;
        //if (j <= b) cnt++; //Sai vi con gom so 0
        if (1 <= j && j <= b) cnt++;
    }
    cout << cnt;
}
