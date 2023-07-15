//https://codeforces.com/gym/102892/problem/3
#include <iostream>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
	int leng; cin >> leng;
	string s; cin >> s;
	int index = 0; string temp; int res = 0;
	while (index != leng){
		if (s[index] == 'b')
		{
			for (char c : temp){
				if (c == 'a') {res += temp.size(); break;}				
			}
			index++;
			temp = "";
			continue; 
		}
		temp.push_back(s[index]);
		index++;
	}
	for (char c : temp){
		if (c == 'a') {res += temp.size(); break;}				
	}
	cout << res << endl;
}