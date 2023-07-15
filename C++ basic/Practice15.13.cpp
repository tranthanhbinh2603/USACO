//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/a-needle-in-the-haystack-1/
#include <iostream>
using namespace std;

//Chưa hoàn thành
const int maxarr = 36;
int hshPattern[maxarr], hshText[maxarr];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	//cin.ignore();
	while (t--)
	{
		for (int i = 0; i < 26; i++) hshPattern[i] = hshText[i] = 0;
		string pattern, text;
		cin >> pattern >> text;
		for (int i = 0; i < pattern.size(); i++)
			hshPattern[pattern[i] - 'a']++;
		for (int i = 0; i < text.size(); i++)
			hshText[text[i] - 'a']++;
		for (int i = 0; i < 36; i++){
			cout << hshPattern[i] << "  ";
		}
		cout << "\n";
		for (int i = 0; i < 36; i++){
			cout << hshText[i] << " ";
		}
		// bool isVaild = true;
		// for (int i = 0; i < 26; i++){
		// 	if (hshPattern[i] > hshText[i]){
		// 		isVaild = false;
		// 		cout << "NO\n";
		// 		break;
		// 	}	
		// }
		// if (isVaild) cout << "YES\n";
	}
}