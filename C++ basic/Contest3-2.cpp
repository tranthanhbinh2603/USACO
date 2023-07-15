//https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question-ii/
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<int, int> x;
	map<int, int> y;

	int N; 
	cin >> N;
	while (N--)
	{
		int tx, ty;
		cin >> tx >> ty;
		x[tx]++;
		y[ty]++;
	}
	for(auto itr = y.begin(); itr != y.end(); )
		if (itr->second < 2)
			y.erase (itr++); 
		else
			itr++;
	for(auto itr = x.begin(); itr != x.end(); )
		if (itr->second < 2)
			x.erase (itr++); 
		else
			itr++;
	for(auto itr = x.begin(); itr != x.end(); ++itr) {
    	if ()
	}
	cout << "\n";
	for(auto itr = y.begin(); itr != y.end(); ++itr) {

	    cout << itr->first << ": "<< itr->second << "\n";
	}
}