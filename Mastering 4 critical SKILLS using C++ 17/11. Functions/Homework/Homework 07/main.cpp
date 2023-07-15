#include <iostream>

using namespace std;

bool starts_with(string input, string pattern, int pos){
    for (int i = 0; i < pattern.size(); i++)
        if (input[pos + i] != pattern[i]) return false;
    return true;
}

string replace_pos(string input, string pattern, string to, int pos){
    string s; int ind;
    while (ind < input.size()){
        if (ind == pos){
            for (int i = 0; i < to.size(); i++)
                s.push_back(to[i]);
            ind += pattern.size();
        }
        else {
            s.push_back(input[ind]);
            ind++;
        }
    }
    return s;
}

string replace_str(string input, string pattern, string to){
    int ind = 0; string s = input;
    while (ind < s.size()){
        if (starts_with(s, pattern, ind)){
            s = replace_pos(s, pattern, to, ind);
            ind += to.size();
        }
        else
            ind++;
    }
    return s;
}

int main()
{
    cout << replace_str("aabcabaaad", "aa" , "") << endl;
    return 0;
}
