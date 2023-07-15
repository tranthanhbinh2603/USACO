//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/
#include <iostream>
using namespace std;
const int maxarr = 132;
int A[maxarr];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--)
	{		
		bool isTrue = true;
		for (int i = 1; i < maxarr; i++)
			A[i] = 0;

		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++)
			A[(int)s[i]]++;

		for (int i = 0; i < maxarr; i++)
		{
			if (A[i] >= 2){
				cout << "Yes" << "\n";
				isTrue = false;
				break;
			} 
		}			
		if (isTrue) cout << "No\n";
	}	
}