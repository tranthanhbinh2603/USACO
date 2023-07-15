#include <iostream>

using namespace std;

bool is_prefix(string main, string prefix, int start_pos = 0)
{
    if (start_pos == prefix.size())
        return true;
    else
        return is_prefix(main, prefix, start_pos + 1) && (main[start_pos] == prefix[start_pos]);
}

int main()
{
    cout << is_prefix("abcdef", "abd");
}
