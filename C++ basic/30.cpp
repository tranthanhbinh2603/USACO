#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int main()
{/*
	stack<int>s;
	s.push(2);
	s.push(3);
	while (!s.empty()){
		cout << s.top() << "\n";
		s.pop();
	}*/

	queue<int> q;
	q.push(1);
	q.push(2);
	while(!q.empty())
	{
		cout << q.front() << "\n";
		q.pop();
	}
}