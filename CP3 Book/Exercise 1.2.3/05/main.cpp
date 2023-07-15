#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Birtday{
    int day; int month; int year;
};

bool cmp(Birtday b1, Birtday b2){
    if (b1.month < b2.month)
        return true;
    if (b1.month > b2.month)
        return false;
    if (b1.day < b2.day)
        return true;
    if (b1.day > b2.day)
        return false;
    return b1.year < b2.year;
}

int main()
{
    freopen("t.inp", "r", stdin);
    int n; cin >> n; vector<Birtday> v;
    for (int i = 0; i < n; i++){
        int d, m, y; cin >> d >> m >> y;
        struct Birtday bd;
        bd.day = d; bd.month = m; bd.year = y;
        v.push_back(bd);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v)
        cout << i.day << " " << i.month << " " << i.year << "\n";
}
