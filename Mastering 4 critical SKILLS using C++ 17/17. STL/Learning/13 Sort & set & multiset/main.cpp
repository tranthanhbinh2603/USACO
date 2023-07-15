#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

void print(vector<int> v){
    for (auto z: v){
        cout << z << " ";
    }
    cout << "\n";
}

void print2(unordered_set<int> l){
    for (auto z: l){
        cout << z << " ";
    }
    cout << "\n";
}

void sort1(){
    vector<int> a {5,1,3,4,2};
    print(a);

    sort(a.begin(), a.end());
    print(a);

    sort(a.rbegin(), a.rend());
    print(a);
}

void set2(){
    //Khong cho trung va da sap xep
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(10);

    cout << s.count(1) << "\n";

    auto it = s.find(10);
    if (it != s.end()){
        cout << "FIND!\n";
    }
    else cout << "NOT FIND!\n";
}

void multiset3(){
    //Cho trung va da sap xep
    //Lien he privoty queue: Khong xap xep va cho trung
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(10);

    cout << s.count(1) << "\n";

    auto it = s.find(10);
    if (it != s.end()){
        cout << "FIND!";
    }
    else cout << "NOT FIND!";
    cout << "\n";
}

void unorderset4(){
    unordered_set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    //Khong trung
    print2(a);

    a.erase(a.begin());
    print2(a);

    auto it = a.find(2); //Nen dung ham
    cout << *it;
}

int main(){
    sort1();
    set2();
    multiset3();
    //Giua phan nay la set cho struct
    unorderset4();
}
