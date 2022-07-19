//https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);	
	cin.tie(nullptr);

	int a, b, c; 
	int count; count = 0;
	int i; i = 1;
	long long int temp; temp = 0;
	cin >> a >> b >> c;
	while (true)
	{
		if (count == c)
			break;
		if (((temp + i) % a == 0) || ((temp + i) % b == 0))
		{
			count++;
			temp += i;
			i = 1;
		}
		else
		{
			temp++;
		}
	}
	if (temp % (a * b / __gcd(a,b)) == 0)
		while (temp >= 0)
		{
			cout << temp << " ";
			temp -= a * b / __gcd(a,b);
		}
	else if (temp % a == 0)
		while (temp >= 0)
		{
			cout << temp << " ";
			temp -= a;
		}
	else if (temp % b == 0)
		while (temp >= 0)
		{
			cout << temp << " ";
			temp -= b;
		}
	
}