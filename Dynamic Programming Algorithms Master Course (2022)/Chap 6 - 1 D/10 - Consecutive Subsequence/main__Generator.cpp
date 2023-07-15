#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
    long long int seed; cin >> seed;
    srand(seed);
    long long int t = 0;
    while (t == 0)
        t = rand() % 100000;
    cout << t << "\n";
    for (int i = 0; i < t; i++){    
        long long int a = rand() % 1000000;
        cout << a << " ";
    }
}