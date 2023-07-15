#include <iostream>
using namespace std;

typedef long long ll;
ll a[1005], size[1005], sum[1005], value[1005];

void create_set(ll n){
	a[n] = n;
	size[n] = 1;
	sum[n] = value[n];
}

int find_set(ll n){
	if (a[n] == n) return n;
	ll k = find_set(a[n]);
	a[n] = k;
	return k;
}

void merge_set(ll parent, ll child){
	if (find_set(parent) != find_set(child)){
		if (size[parent] < size[child]) swap(parent, child);
		a[child] = parent;
		sum[parent] += sum[child];
		size[parent] += size[child];
	}
}

int return_sum(ll n){
	return sum[find_set(n)];
}


int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	for (ll i = 1; i <= 4; i++)
		cin >> value[i];
	
	for (ll i = 1; i <= 4; i++)
        create_set(i);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    for (ll i = 1; i <= 4; i++)
        cout << return_sum(i) << " ";
    cout << "\n";

    merge_set(1, 2);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    for (ll i = 1; i <= 4; i++)
        cout << return_sum(i) << " ";
    cout << "\n";

    merge_set(3, 4);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    for (ll i = 1; i <= 4; i++)
        cout << return_sum(i) << " ";
    cout << "\n";

    merge_set(1, 3);
    for (ll i = 1; i <= 4; i++)
        cout << "Cha cua " << i << " la " << find_set(i) << "\n";
    for (ll i = 1; i <= 4; i++)
        cout << return_sum(i) << " ";
    cout << "\n";
}