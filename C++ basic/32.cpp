//Next Greater Element using Stacks

/*6 
4 5 2 25 7 8*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NGE (vector<int> input)
{
	vector<int> result(input.size(), -1);
	stack<int> s;

	for (int i = 0; i < input.size(); i++)
    {
        while (!s.empty() && input[s.top()] < input[i])
        {
            result[s.top()] = input[i];
            s.pop();
        }
        s.push(i);
    }
	return result;
}

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	std::vector<int> nge = NGE(v);
	for (int i = 0; i < n; i++)
		cout << v[i] << " " << nge[i] << "\n";
}