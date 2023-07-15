//https://leetcode.com/problems/generate-parentheses/
#include <iostream>
#include <vector>
using namespace std;

vector<string> v;

void generate(string &s, int open, int close)
{
	if (open == 0 && close == 0){
		v.push_back(s);
		return;
	}
	if (open > 0){
		s.push_back('(');
		generate(s, open-1, close);
		s.pop_back();
	}		

	if (close > 0){
		if (open < close)
		{
			s.push_back(')');
			generate(s, open, close-1);
			s.pop_back();
		}
	}
}

int main()
{ 
	string s;
	generate(s, 5, 5);
	for (string s1: v)
		cout << s1 << "\n";
}