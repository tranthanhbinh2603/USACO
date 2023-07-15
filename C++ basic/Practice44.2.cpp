//https://www.codechef.com/problems/MINEAT
//Tiếng Việt có.
#include <iostream>
#include <algorithm>
using namespace std;

const int maxN = 1e5;
long int pile[maxN];
int n; long int h; 

bool have_eat(long int banana_per_hour)
{
	long int hour = 0;
	for (int i = 0; i < n; i++)
		if (pile[i] % banana_per_hour == 0) hour += pile[i] / banana_per_hour;
			else hour += (pile[i] / banana_per_hour) + 1;
	return hour <= h;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> h;
		for (int i = 0; i < n; i++)
			cin >> pile[i];
		long int low = 0;
		long int high = *max_element(pile, pile + n);
		while (high - low > 0)
		{
			long int mid = (long int) (low + high) / 2;
			if (have_eat(mid)) //Chà, có thể ăn được nhiều đấy, giảm xuống
				high = mid;
			else
				low = mid + 1;
		}
		cout << low << "\n";
	}

}