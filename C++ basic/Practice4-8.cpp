//https://www.codechef.com/problems/STONES
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
	{
		string a,b;
		cin >> a >> b;
		int res = 0;
		//Loai bo cac ki tu trung
		for (int i = 0; i < a.size() - 1; i++)
		{
			for (int z = i + 1; z < a.size(); z++)
			{
				if (a[i] == a[z]) a[z] = '\0';
			}
		}
		for (int i = 0; i < a.size(); i++)
		{
			for (int z = 0; z < b.size(); z++)
			{
				if (a[i] == b[z]) res++;
			}			
		}
		cout << res << "\n";
	}
}