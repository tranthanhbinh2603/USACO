/*
Given 2d array a of N*N integers.Given Q queries and in each query 
given a,b,c and d print sum of square represented by (a,b) as
top left point and(c,d)as top bottom right point
Constraints
1<=N<=10^3
1<=a[i][j]=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/
#include <iostream>
using namespace std;

const int maxN = 1e3 + 10;
int A[maxN][maxN];
long long pf[maxN][maxN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		for (int z = 0; z < N; z++){
			cin >> A[i][z];
			pf[i][z] = A[i][z] + pf[i - 1][z] + pf[i][z - 1] - pf[i - 1][z - 1];

		}
/*
	int Q; cin >> Q;
	while (Q--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		long long int sum = 0;
		for (int i = a - 1; i < c; i++)
			for (int z = b - 1; z < d; z++)
				sum += A[i][z];

		cout << sum << "\n";
	}*/
	//O(N^2) + O(Q * N ^ 2) = 10 ^ 5 * 10 ^ 6 = 10^11
	int Q; cin >> Q;
	while (Q--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		cout << pf[c][d] - pf[a - 1][d] - pf[c][b-1] + pf[a-1][b-1] << "\n";
	}
}