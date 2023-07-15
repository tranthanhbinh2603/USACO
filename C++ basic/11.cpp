#include <iostream>
using namespace std;

int main()
{
	/*4 công thức:
	(a + b) % M = ((a % M) + (b % M)) % M
	(a - b) % M = ((a % M) - (b % M)) % M
	(a * b) % M = ((a % M) - (b % M) + M) % M
	(a / b) % M = ((a % M) * ((b^-1) % M)) % M*/

	/*In giai thừa của N. 1 <= N <= 100*/
	/*int n;
	cin >> n;
	long long fact = 1;
	for (int i = 1; i <= n; i++)
		fact = fact * i;
	cout << fact;*/
	/*In module M khi M = 47*/
	/*Rõ ràng ta dùng công thức thứ III.*/

	int n;
	cin >> n;
	int M = 47;
	long long fact = 1;
	for (int i = 1; i <= n; i++)
		fact = (fact * i) % M;
	cout << fact;

	/*(1 * 2 * ... * 5) % 47
	= (1 * ... * 4) % 47
	= */
}