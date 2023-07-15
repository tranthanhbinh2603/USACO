#include <iostream>

using namespace std;

int main()
{
    int nb, ng, nt;
    cin >> nb >> ng >> nt;

    cout << (nb > 25);
    cout << (nb <=30);
    cout << ((nb > 20) && (nt > 2) && (ng > 30) && (nt > 4));
    cout << ((nb < 60) || (ng < 70));
    cout << !((nb >= 60) && (ng >= 70));
    cout << (nb - ng >= 10);
    cout << ((abs(nb - ng) > 10) || (nt > 5));
    cout << ((nb - ng > 10) || (ng - nb > 15));
}
