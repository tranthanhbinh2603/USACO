#include <iostream>

using namespace std;

int max(int a, int b, int c){
    if (a > b && a > c) return a;
    else if (b > c && b > a) return b;
    else return c;
}

int max(int a, int b, int c, int d){
    int e = max (a, b, c);
    if (e > d) return e; else return d;
}

int max(int a, int b, int c, int d, int e){
    int f = max (a, b, c, d);
    if (f > e) return f; else return e;
}

int max(int a, int b, int c, int d, int e, int f){
    int g = max (a, b, c, d, e);
    if (g > f) return g; else return f;
}

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << max(a, b, c, d, e, f);
}
