#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1e7 + 10;
vector<bool> prime1(MAX, 1);
vector<bool> prime2(MAX, 1);

void sieve_1(){
    prime1[0] = prime1[1] = 0;
    for (int i = 2; i <= MAX; i++)
        if (prime1[i])
            for (int z = i * 2; z <= MAX; z += i)
                prime1[z] = 0;
}

void sieve_2(){ //Toi uu hon
    prime2[0] = prime2[1] = 0;
    for (int i = 4; i <= MAX; i+=2)
        prime2[i] = 0;
    for (int i = 3; i <= MAX; i++)
        if (prime2[i])
            for (int z = i * 2; z <= MAX; z += i)
                prime2[z] = 0;
}

int main()
{
    sieve_2();
    for (int i = 0; i <= 100; i++)
        if (prime2[i]) cout << i << " ";
}
