#include <iostream>
#include <cstdio>
using namespace std;

const int MAX = 1e6;

int main()
{
    freopen("GIAIDB.INP", "r", stdin);
    freopen("GIAIDB.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    int poi[n], age[n];

    for(int i = 0; i < n; i++)
        cin >> poi[i];
    for (int i = 0; i < n; i++)
        cin >> age[i];

    int cou {0}, ageres{0};
    for (int i = 0; i < n; i++)
    if (poi[i] >= k)
    {
        if (ageres == 0 || ageres > age[i]){
            ageres = age[i];
            cou = 1;
        }
        else if (ageres == age[i])
            cou++;
    }
    cout << cou << " " << ageres;

}
