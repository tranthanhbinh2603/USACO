//https://www.codechef.com/problems/ICL1905
#include <iostream>
#include <limits.h>
using namespace std;

const int maxN = 10000;
int C[maxN], D[maxN], pfC[maxN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n, a;
		cin >> n >> a;
		for (int i = 1; i <= n; i++)
		{
			cin >> C[i] >> D[i];
			pfC[i] = pfC[i - 1] + C[i];
		}
		cout << "\n";
		int l, r;
		int mx = 0;
		for (int l = 1; l <= n; l++)
		{
			//Kỹ thuật tìm phần tử lớn nhất trong 1 dãy từ A[l] đến A[r] 
			int d_mn=INT_MAX;
            int d_mx=INT_MIN;			
			for (int r = l; r <= n; r++)
			{
				d_mn = min(d_mn,D[r]);
               	d_mx = max(d_mx,D[r]);
                mx = max(mx, (r - l + 1)  * a - (pfC[r] - pfC[l - 1]) - (d_mn - d_mx) * (d_mn - d_mx));
			}
		}
		cout << mx;
	}
}