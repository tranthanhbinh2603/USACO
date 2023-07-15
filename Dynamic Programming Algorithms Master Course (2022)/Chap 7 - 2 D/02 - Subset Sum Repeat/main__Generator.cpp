#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
    long long int seed; cin >> seed;
    srand(seed);
    long long int n = rand() % 100;
    long long int s = rand() % 100;
    cout << n << " " << s << "\n";
    for (int i = 0; i < n; i++){    
        long long int a = (rand() % 10) + 1;
        cout << a << " ";
    }
}