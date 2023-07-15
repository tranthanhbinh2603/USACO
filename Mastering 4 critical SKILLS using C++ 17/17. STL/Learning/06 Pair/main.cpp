#include <iostream>

using namespace std;

int main()
{
    //Mot cap 2 du lieu
    pair<int, int> a = make_pair(1, 2);
    cout << a.first << " " << a.second << endl;

    pair<int, pair<int, string>> b = make_pair(1, make_pair(2, "abc"));
    cout << b.first << " " << b.second.first << " " << b.second.second << endl;
    //b = make_pair(3, "xxy");
    cout << b.first << " " << b.second.first << " " << b.second.second << endl;
}
