//Chu y: Duyet duoc chu nao, in ra chu do
#include <iostream>

using namespace std;

int main()
{
    int t, res;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if ((s.size() == 2) && ((toupper(s[0]) == 'N') || toupper(s[0]) == 'O') && ((toupper(s[1]) == 'N') || (toupper(s[1]) == 'O')) && (toupper(s[0]) != toupper(s[1])))
        {
            res++;
            //cout<<s<<"\n"
        }
        //Cach viet if khac la liet ke truong hop in thuong va in hoa
    }
    cout << res;
}
