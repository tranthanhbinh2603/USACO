#include <iostream>
#include <vector>

using namespace std;

int max_3stack_sum(vector<int> &a, vector<int> &b, vector<int> &c){
    long int suma {0}, sumb {0}, sumc {0};
    for (auto i = a.begin(); i != a.end(); i++)
        suma += *i;
    for (auto i = b.begin(); i != b.end(); i++)
        sumb += *i;
    for (auto i = c.begin(); i != c.end(); i++)
        sumc += *i;
    while (true){
        long int m = max(suma, max(sumb, sumc));
        if ((suma == sumb) && (sumb == sumc)){
            return m;
        }
        if (m == suma){
            auto i = a.end() - 1;
            suma -= *i;
            a.pop_back();
        }
        else if (m == sumb){
            auto i = b.end() - 1;
            sumb -= *i;
            b.pop_back();
        }
        else if (m == sumc){
            auto i = c.end() - 1;
            sumc -= *i;
            c.pop_back();
        }
    }
    return 0;
}


int main()
{
    vector<int> a {1, 2, 3, 4};
    vector<int> b {2, 2, 2, 4, 0};
    vector<int> c {12, 3, 3, 5};
    cout << max_3stack_sum(a, b, c);
}
