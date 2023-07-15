#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void basic_vector(){
    vector<int> i;
    i.push_back(1);
    i.push_back(10);

    for (vector<int>::iterator it = i.begin(); it != i.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";
}

void vector_interlizing(){
    vector <int> i(10,5);
    for (auto it: i){
        cout << it << " ";
    }
    cout << "\n";
    i[1] = 20;
    for (auto it: i){
        cout << it << " ";
    }
    cout << "\n";
    for (auto &it : i){
        it += 1;
    }
    for (auto it: i){
        cout << it << " ";
    }
    cout << "\n";
}

void erase_vec(){
    vector<int>i {1,-2,3,-4,5};
    for (auto it = i.begin(); it != i.end(); ){
        if (*it % 2 == 0){
            i.erase(it);
        }
        else it++;
    }
    for (auto it: i){
        cout << it << " ";
    }
    cout << "\n";
}

void find_vec(){
    vector<int> i {1,2,3,4,5};
    auto i1 = find(i.begin(), i.end(), 5);
    if (i1 != i.end())
    {
        cout << "Find~~";
    }
    else {
        cout << "NOT FIND!!!!";
    }
    cout << "\n";
}

void insert_vec(){
    vector<int> i {1,2,3,4,5};
    auto i1 = find(i.begin(), i.end(), 3);
    if (i1 != i.end())
    {
        vector <int> i3 {1,2,3,4,5};
        i.insert(i1, i3.begin(), i3.end());
        for (auto it: i){
            cout << it << " ";
        }
    }
    else {
        cout << "NOT FIND!!!!";
    }
}

void two_D_vector(){
    vector<vector<int>> v(10, vector<int>(5,3));
    for (auto it: v){
        for (auto it2: it)
            cout << it2 << " ";
        cout << "\n";
    }
    cout << "\n";
    v[0][0] = 10;
    v[1].push_back(500);
    v[0].pop_back();
    for (auto &it: v){
        for (auto &it2: it)
            cout << it2 << " ";
        cout << "\n";
    }
    cout << "\n";
}

void three_d_vector(){
    vector<vector<vector<int>>> v (5, vector<vector<int>>(7, vector<int> (9, 1)));
    cout << v.size() << " " << v[0].size() << " " << v[0][0].size() << "\n";
    for (auto it: v){
        for (auto it2: it){
            for (auto it3: it2)
                cout << it3 << " ";
            cout << "\n";
        }
        cout << "\n";
    }
}

void vector_string(){
    vector<string> s {"hacker rank", "abc", "def"};
    for (auto it: s){
        cout << it << " ";
    }
    cout << "\n";
    for (auto it: s){
        for (auto it2: it){
            cout << it2 << " ";
        }
    }
}

int main()
{
    //Phan 1
    basic_vector();
    vector_interlizing();
    erase_vec();
    find_vec();
    insert_vec();

    cout << "\n\n\n";

    //Phan 2
    two_D_vector();
    three_d_vector();
    vector_string();
}
