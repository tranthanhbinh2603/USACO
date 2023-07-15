#include <iostream>
#include <stack>
using namespace std;

int main(){
	string s; cin >> s;
	stack<char> v;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '('){
			v.push(s[i]);
			continue;
		}
		else {
			if (v.size() == 0){
				cout << "NO";
				return 0;
			}
			if (v.top() != '('){
				cout << "NO";
				return 0;
			}
		}
		v.pop();
	}
	if (v.size() != 0)
	 	cout << "NO";
	else 
		cout << "YES";
}