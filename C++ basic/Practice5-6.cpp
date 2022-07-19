//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
#include <iostream>
using namespace std;

const int maxarr = 32;
int A[maxarr][maxarr];

string CheckSymmetric(int n)
{
	for (int i = 0; i < n; i++)
		for (int z = 0; z < n; z++)
		{			
			if (A[i][z] != A[i][n - z - 1]) return "NO";
			if (A[i][z] != A[n - i - 1][z]) return "NO";
		}
	
	return "YES";
}	

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		cin.ignore();
		for (int i = 0; i < n; i++)
		{			
			string temp; 
			getline(cin, temp); 
			for (int z = 0; z < temp.size(); z++)
				A[i][z] = temp[z] - 48;
		}

		cout << CheckSymmetric(n) << "\n";
	}	
}