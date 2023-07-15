#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;

typedef long long int ll;

void binary_search(vector<int> v, int n, int &lower, int &upper, bool &haveLower, bool &haveUpper, int mode = 1){
    auto p = equal_range(v.begin(), v.end(), n);
    lower = p.first - v.begin();
    upper = p.second - v.begin();
    if (lower == 0 && v[0] != n)
        haveLower = false;
    if (lower == v.size() && v[v.size() - 1] != n)
        haveLower = false;
    if (upper == v.size())
        haveUpper = false;
}

const int ma = 1e6;
bool sang [ma + 1];
void sinh_sang(){
    sang[1] = false;
    for (int i = 2; i <= 1e6; i++)
        sang[i] = true;
    for (int i = 2; i <= 1e6; i++)
        if (sang[i])
            for (int z = i * 2; z <= 1e6; z+=i)
                sang[z] = false;
}

bool ktnt(ll n){
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

map<int, int> ptnt(ll n){
    map<int, int> m;
    if (n == 1){
        m[1] = 1;
        return m;
    }
    while (n % 2 == 0){
        m[2]++;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i+=2)
        while (n % i == 0){
            m[i]++;
            n /= i;
        }
    if (n > 2)
        m[n]++;
    return m;
}

ll dem_uoc(ll n){
    map<int, int> a = ptnt(n);
    ll ans {1};
    for (auto i : a)
        ans *= (i.second + 1);
    return ans;
}

int main()
{
    map<int, int> a = ptnt(2*3*5*6*7);
    for (auto i : a)
        cout << i.first << " " << i.second << "\n";
}
