#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

vector<ll> v (1e7);
vector<ll> size1 (1e7);

//Make set = Set cha của nó chính là nó.
void make_set(int n){
    v[n] = n;
    size1[n] = 1; //Size ban dau la 1.
}

//find_set = Đệ quy tìm cha của nó. Hàm đệ quy nhập vào node cần tìm
int find_set(int n){
    if (v[n] == n) return n;
    int a = find_set(v[n]);
    v[n] = a;
    return a;
}

//union_sets = set 2 cây gần nhau
void union_sets(int parent, int child){
    if (find_set(parent) != find_set(child)){
        //Neu size a nho hon size b, swap
        if (size1[parent] < size1[child]) swap(parent, child);
        v[child] = parent;
        //Cong size parent voi size child lưu vào parent.
        size1[parent] += size1[child];
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (ll i = 1; i <= 4; i++)
        make_set(i);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    cout << "\n";

    union_sets(1, 2);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    cout << "\n";

    union_sets(3, 4);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    cout << "\n";

    union_sets(1, 3);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    cout << "\n";
}