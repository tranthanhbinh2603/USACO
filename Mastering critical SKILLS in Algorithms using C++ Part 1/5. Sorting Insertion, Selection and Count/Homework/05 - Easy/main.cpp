#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<string> &array){
    vector<vector<vector<string>>> s (26, vector<vector<string>>(26));
    for (int i = 0; i < array.size(); i++)
        s[(int)array[i][0] - 'a'][(int)array[i][1] - 'a'].push_back(array[i]);
    for (int i = 0; i < 26; i++)
        for (int z = 0; z < 26; z++)
            if (s[i][z].size() != 0)
                for (int k = 0; k < s[i][z].size(); k++)
                    cout << s[i][z][k] << " ";
}
int main()
{
    vector <string> s {"axz", "axa", "zzz", "abc", "abe"};
    countSort(s);
    return 0;
}
