/*Given array a of N integers.Given Q queries and in each query 
given L and R. Print sum of array elemnts from index L to R(L,R included)
Constraints
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/
#include <iostream>
using namespace std;

const int maxN = 1e5 + 10;
int A[maxN];
int Prefix[maxN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];	

	int Q;
	cin >> Q;
	while (Q--)
	{
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for (int i = l - 1; i < r; i++)
			sum += A[i];
		cout << sum << "\n";
	}*/
	//O(N) + O(N * Q) = 10^10
	int N; cin >> N;
	for (int i = 0; i < N; i++){
		cin >> A[i];	
		Prefix[i] = Prefix[i - 1] + A[i];
	}

	int Q;
	cin >> Q;
	while (Q--)
	{
		int l, r;
		cin >> l >> r;		
		cout << Prefix[r - 1] - Prefix[l - 2] << "\n";
	}
	//O(N) + O(Q) = 10^5

}