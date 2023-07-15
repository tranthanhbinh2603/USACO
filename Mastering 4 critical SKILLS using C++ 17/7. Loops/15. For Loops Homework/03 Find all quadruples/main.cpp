#include <iostream>

using namespace std;

int main()
{
    int cnt;
    //4 loop
//    for (int i = 1; i <= 200; i++)
//        for (int z = 1; z <= 200; z++)
//            for (int k = 1; k <= 200; k++)
//                for (int l = 1; l <= 200; l++)
//                    if (i + z == k + l) cnt++;


    //3 loop
    //d = a + b - c.
    for (int i = 1; i <= 200; i++)
        for (int z = 1; z <= 200; z++)
            for (int k = 1; k <= 200; k++){
                int l = i + z - k;
                if (1 <= l && l <= 200) cnt++;
            }

    cout << cnt;
}
