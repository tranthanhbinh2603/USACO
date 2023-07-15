#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
using namespace std;

bool isDiv(vector<double> p, double area, int people){
    int cnt {0};
    for (int i = 0; i < p.size(); i++){
        cnt += (int) (p[i] / area);
        //cout << p[i] << "  " << area << " " << p[i] / area << " " << (int)p[i] / (int)area << "\n";
    }
    return cnt >= people;
}

double largest_area(vector<double> &pie_radius, int N){
    double st = 0, en = 0, eps = 1e-3, ans = 0;
    vector<double> pie_s;
    for (int i = 0; i < pie_radius.size(); i++){
        double a = pie_radius[i] * pie_radius[i] * 3.141592653589793238;
        pie_s.push_back(a);
        en += a;
    }
    for (int i = 0; i < 100; i++){ // 1 trick
        double md = (st + en) / 2;
        if (isDiv(pie_s, md, N))
            ans = md, st = md;
        else
            en = md;
    }
    //cout << st << " " << en << "\n";
    return st;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    freopen("fie.in", "r", stdin);

	int t; cin >> t;
	while (t--)
    {
        int n, f; cin >> n >> f;
        vector<double> pie;
        for (int i = 0; i < n; i++)
        {
            double a; cin >> a;
            pie.push_back(a);
        }
        //for (int i = 0; i < pie_radius.size(); i++)
        //    en += pie_radius[i] * pie_radius[i] * M_PI;
        double x = largest_area(pie, f+1);
        //bool a1 = isDiv(pie, 25.1327, f+1);
        cout << fixed << setprecision(4) << x << "\n";
        //cout << a1 << "\n";
    }
}
