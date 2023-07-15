#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int eliminateMaximum(vector<int>& dist, vector<int>& speed){
    vector <int> kill (dist.size());
    for (int i = 0; i < dist.size(); i++)
        if (dist[i] % spped[i] == 0)
            kill.push_back(dist[i] / spped[i]);
        else
            kill.push_back(dist[i] / spped[i] + 1);
    sort(kill.begin(), kill.end());
    int res {0};
    for (int i = 0; i < kill.size(); i++)
        if (i < kill[i])
            res++;
        else break;
    return res;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
