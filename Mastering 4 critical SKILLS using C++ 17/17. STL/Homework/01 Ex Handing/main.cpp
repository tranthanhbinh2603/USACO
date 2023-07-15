#include <iostream>
#include <vector>
using namespace std;

void handing(int n){
    if (n < 0)
        throw invalid_argument("Hello, day la loi");
    else cout << n << "\n";
}

int main()
{
//    vector<int> n (10);
//    cout << n[25];
//    cout << n.at(25);
    try{
        handing(1);
        handing(-1);
    }
    catch (invalid_argument &a){
        cout << a.what();
    }
}
