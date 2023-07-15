#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//bool cmp(pair<int, int> a, pair<int, int> b){
//    if (a.first < b.first)
//        return true;
//    else if (a.first == b.first || a.second < b.second)
//        return true;
//    else return false;
//}

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker){
    int sz_diff = difficulty.size();
    int sz_work = worker.size();
    vector <pair<int,int>> job;
    for (int i = 0; i < sz_diff; i++){
        pair<int, int> a (difficulty[i], profit[i]);
        job.push_back(a);
    }
    sort(job.begin(), job.end());
    for (int i = 0; i < sz_diff; i++){
        difficulty[i] = job[i].first;
        profit[i] = job[i].second;
    }
    int res;
    for (int i = 0; i < sz_work; i++){
        int ind_diff = upper_bound(difficulty.begin(), difficulty.end(), worker[i]) - difficulty.begin();
        //cout << difficulty[ind_diff] << " ";
        if (ind_diff == 0){
            //cout << difficulty[0] << " " << worker[i] << "\n";
            if (difficulty[0] > worker[i])
                continue;
            else res += profit[0];
        }
        else
            res += *max_element(profit.begin(), profit.begin() + ind_diff);
    }
    return res;
}


int main()
{
    vector<int> di {2,17,19,20,24,29,33,43,50,51,57,67,70,72,73,75,80,82,87,90};
    vector<int> pro {6,7,10,17,18,29,30,31,34,39,40,42,48,54,57,78,78,78,83,88};
    vector<int> wor {12,9,11,41,11,87,48,6,48,93,76,73,7,50,55,97,47,33,46,10};
    cout << maxProfitAssignment(di, pro, wor);
}
