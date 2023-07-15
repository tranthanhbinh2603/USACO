#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    long long int t = 1;
    while (t == 0)
        t = rand() % 10;
    cout << t << "\n";
    for (int i = 0; i < t; i++){    
        long long int a = rand() % 10;
        long long int b = rand() % 10;
        cout << a << " " << b << "\n";
        for (int z = 0; z < b; z++){
            long long int random = rand() % 100;
            cout<<random<<" ";
        }
        cout << "\n";
    }
    cout << 0;
}