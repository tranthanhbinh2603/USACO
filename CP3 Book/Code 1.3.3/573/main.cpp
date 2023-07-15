#include <iostream>

using namespace std;

bool leo(double chieu_cao, double leo_len, double leo_xuong, double phan_tram, double &ngay){
    double cc_1_ngay = leo_len;
    double cc_ht = 0;
    double lx = cc_1_ngay / 100 * phan_tram;
    //bool first = true;
    while (cc_ht >= 0){
        //first = false;
        ngay += 1;
        cc_ht += cc_1_ngay;
        //cout << cc_1_ngay << " " << cc_ht << " ";
        if (cc_ht > chieu_cao) break;
        cc_ht -= leo_xuong;
        if (cc_ht < 0) break;
        //cout << cc_ht << "\n";
        if (cc_1_ngay - lx <= 0) cc_1_ngay = 0; else cc_1_ngay-= lx;
    }
    if (cc_ht <= 0) return false; else return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("f.inp", "r", stdin);
    //freopen("f.out", "w", stdout);
    double h, u, d, f; cin >> h >> u >> d >> f;
    while (h != 0 && u != 0 && d != 0 && f != 0){
        double res {0};
        bool isVaild = leo(h,u,d,f,res);
        if (isVaild)
            cout << "success on day " << res << "\n";
        else
            cout << "failure on day " << res << "\n";
        cin >> h >> u >> d >> f;
    }

}
