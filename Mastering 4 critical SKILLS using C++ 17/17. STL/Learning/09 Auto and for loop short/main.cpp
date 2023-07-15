#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //Auto
    auto a = 1;
    auto b = 3.141925;
    auto c = 'a';
    auto d = "Hack by html";

    //For loop short
    int e[] {1,2,3,4,5};
    for (auto f: e){
        cout << f << " ";
    }
    cout << "\n";
    deque<int> q {1,2,3,4,5};
    for (auto f: q){
        cout << f << " ";
    }
    cout << "\n";
    for (auto f: {1,2,3,4,5}){
        cout << f + 1 << " ";
    }
    cout << "\n";
    for (auto f: "Hellowwwww"){
        cout << f << " ";
    }

}
