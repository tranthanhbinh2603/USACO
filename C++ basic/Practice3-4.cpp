//https://www.hackerearth.com/problem/algorithm/mangoes/description/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int w;
	cin >> w;
	if ((w % 2 == 0) && (w != 2)){
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}

}