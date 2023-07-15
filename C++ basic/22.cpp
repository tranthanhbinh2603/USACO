#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<pair<int, int>> v)
{ 
	cout << "Size: " << v.size() << "\n";
	for (int i = 0; i < v.size(); ++i){
		cout << v[i].first << " " << v[i].second << "\n";
	}
}

void printVector(vector<int> v)
{ 
	cout << "Size: " << v.size() << "\n";
	for (int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	cout << "\n";
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

/*	vector<pair<int, int>> v = {{1, 2}, {2, 3}};
	printVector(v);*/

	/*vector<pair<int, int>> v;
	int n;
	cin >> n;
	while (n--){
		int x, y;
		cin >> x >> y;
		v.push_back({x,y});
	}
	printVector(v);*/

	int N;
	cin >> N;
	//std::vector<int> v[N]; //Có N mảng vector int
	vector<vector<int>> v; //Nested vector
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		vector<int> temp;
		for (int j = 0; j < n; j++)
		{
		 	int x;
			cin >> x;
		 	temp.push_back(x);
		}
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		printVector(v[i]);
	}
	cout << v[0][1];

}