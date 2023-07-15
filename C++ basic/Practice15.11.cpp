//https://leetcode.com/problems/word-pattern/
#include <iostream>
#include <unordered_map>
using namespace std;

bool wordPattern(string pattern, string s) 
{
	const int maxIndex = 1500;
	string charS[maxIndex];
	string temp = ""; int index = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == ' '){
			charS[index] = temp;
			temp = "";
			index++;
		}
		else
			temp += s[i];
	charS[index] = temp; index++;

	unordered_map<char, string> map;
	for (int i = 0; i < pattern.size(); i++){
		if (map[pattern[i]] == "") map[pattern[i]] = charS[i];
		else if (map[pattern[i]] != charS[i]) return false;
	}
	for (int i = 0; i < index; i++)
		for (int z = 0; i < index; i++)
			if ((pattern[i] != pattern[z]) && (map[pattern[i]] == map[pattern[z]]))
				return false;
	if (index != pattern.size()) return false;
    return true;
}

int main()
{
	string pattern, s;
	cin >> pattern; 
	cin.ignore();
	getline(cin, s);
	cout << wordPattern(pattern, s);
}