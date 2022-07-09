#include <iostream>
using namespace std;

//int x;

int main()
{

//    int a = 2;
//    int b = 3;
//    cout << (a == b) << "\n";
//    cout << (a != b) << "\n";
//    cout << (a <= b) << "\n";
//    cout << ((a == b) || (a < b)) << "\n";
//    cout << ((a == b) && (a < b)) << "\n";

    // int n;
    // cin >> n;
    // if (n % 2 == 0){
    //     cout << "YES";
    // }
    // else if(n % 3 == 0){
    //     cout << "Divisible by 3";
    // }
    // else{
    //     cout << "NO";
    // }

    // int n;
    // cin >> n;
    // {
    //     int x;
    // }
    // x = 2;

    //int i = 1;
    // while (i <= 10){
    //     cout << i << endl;
    //     i++;
    // }
    // for (int z = 1; z <= 15; ++z)
    // {
    //     cout << z << endl;
    // }
    /*for (i = 1; i <= 10; cout << i++ <<endl){
        cout << i << "\n";
    }*/

    //Practice: In hình day ngoi sao
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int z = 1; z <= i; z++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // } 

    //Nhập nhiều đầu vào
    // int t;
    // cin >> t;
    /*for (int test = 0; test < t; ++test){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int z = 1; z <= i; z++)
            {
                cout << "*";
            }
            cout << "\n";
        }                       
    }*/
    // while (t--){
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int z = 1; z <= i; z++)
    //         {
    //             cout << "*"; 
    //         }
    //         cout << "\n";
    //     }                     
    // }

    //Vong lap vo tan
    // while (1){

    // }
    // for (int i = 1;;){

    // }

    //break va continue~
    // for (int i = 0; i < 10; ++i){
    //     if (i == 8){
    //         break;
    //     }
    //     cout << i << "\n";
    // }
    // for (int i = 0; i < 10; ++i){
    //     if (i == 8){
    //         continue;
    //     }
    //     cout << i << "\n";
    // }  

    //Practice: https://www.spoj.com/problems/TEST/
    // int n;
    // while (true){
    //     cin >> n;
    //     if (n == 42) break;
    //     cout << n << "\n"; 
    // }

    //Tính số trong dãy số
    int n;
    cin >> n;
    int sum;
    while (n > 0)
    {
        sum += n % 10;
        n = (n - (n % 10)) / 10;
    }
    cout << sum;
}
