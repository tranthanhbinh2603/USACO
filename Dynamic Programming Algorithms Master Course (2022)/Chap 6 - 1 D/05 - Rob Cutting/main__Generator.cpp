#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    long long int n = rand() % 1000;
    cout << n << "\n";
    for (int i = 0; i < n; i++){        
        long long int random = rand();
        cout<<random<<endl;
    }
    cout << 0;
}