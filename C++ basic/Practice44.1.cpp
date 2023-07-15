//https://www.spoj.com/problems/PIE/
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

const double pi = 3.14159;

bool have_div(int number, long double arr[], int f, int n) //Check xem có thể chia cho n người hay không
{
	int fr=0;
    if (number==0)
        return 0;
    for (int i=0; i<n; i++)
        fr+=(int)(arr[i]/number);
    if (fr>=f)
        return 1;
    else
        return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t; cin >> t;
	while (t--)
	{
		int n, f; cin >> n >> f; f++;
		long double arr[n];
		long double temp; 
		for (int i = 0; i < n; i++)
		{
			arr[i] = 0;
			cin >> arr[i];
			arr[i] = arr[i] * arr[i] * pi;
		}
		sort(arr, arr+n);
		long double lo = 0.0;
		long double hi = arr[n - 1];
		while (hi - lo > 1e-6)
		{
			cout << fixed << setprecision(4) << hi << " " << lo << "\n";
			long double mid = (hi + lo) / 2;
			if (have_div(mid, arr, f, n) == 1)
				lo = mid;
			else
				hi = mid;
		}
		cout << fixed << setprecision(4) <<lo << "\n";

	}
}