#include <iostream>
#include <algorithm>
using namespace std;

const int BLOCK_SIZE = 320;
const int N = 1e5 + 2;

int n, q;
int cnt[N / BLOCK_SIZE + 2][N];
int a[N];

void preprocess()
{
    for (int i = 0; i < n; ++i)
        ++cnt[i / BLOCK_SIZE][a[i]];
}

int query(int l, int r, int k)
{
    int blockL = (l + BLOCK_SIZE - 1) / BLOCK_SIZE;
    int blockR = r / BLOCK_SIZE;
    if (blockL >= blockR)
        return count(a + l, a + r + 1, k);
    
    int sum = 0;
    for (int i = blockL; i < blockR; ++i)
        sum += cnt[i][k];
        
    for (int i = l, lim = blockL * BLOCK_SIZE; i < lim; ++i)
        if (a[i] == k) ++sum;
        
    for (int i = blockR * BLOCK_SIZE; i <= r; ++i)
        if (a[i] == k) ++sum;
        
    return sum;
}

// Ham update de day neu can update
// void update(int u, int v)
// {
//     int block = u / BLOCK_SIZE;
//     --cnt[block][a[u]];
//     a[u] = v;
//     ++cnt[block][a[u]];
// }

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	preprocess();
	cin >> q;
	while (q--){
		int l, r, k; cin >>  l >> r >> k;
		cout << query(l, r, k) << "\n";
	}
}