//https://leetcode.com/problems/goal-parser-interpretation/
#include <iostream>
using namespace std;

string interpret(string command) {
   string res = ""; int i = 0;
   while (i < command.size())
   {
   		if (command[i] == 'G')
   		{
   			res += 'G';
   			i++;
   		}
   		else
   		{
   			if ((command[i] == '(') && (command[i+1] != ')'))
   			{
   				res += "al";
   				i += 4;
   			}
   			else 
   			{
   				res += "o";
   				i += 2;
   			}
   		}
   }
	return res;
}

int main()
{
	string a;
	cin >> a;

	cout << interpret(a);
}