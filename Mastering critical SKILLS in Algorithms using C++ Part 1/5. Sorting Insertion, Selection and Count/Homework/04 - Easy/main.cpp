#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<string> &array){
    vector<vector<string>> hsh (27);
    for (int i = 0; i < array.size(); i++)
        hsh[(int)array[i][0] - 'a'].push_back(array[i]);
    for (int i = 0; i < 26; i++)
        if (hsh[i].size() != 0)
            for (int j = 0; j < hsh[i].size(); j++)
                cout << hsh[i][j] << " ";
}
int main()
{
    vector <string> s {"ziad", "belal", "adam", "baheir", "ali"};
    countSort(s);
    return 0;
}
