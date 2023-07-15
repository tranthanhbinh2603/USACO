#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> findRightInterval(vector<vector<int>>& intervals){
    map<int, int> m;
    vector<int> st {0};
    for (int i = 0; i < intervals.size(); i++){
        m[intervals[i][0]] = i;
        st.push_back(intervals[i][0]);
    }
    sort(st.begin(), st.end());
    vector<int> res;
    for (int i = 0; i < intervals.size(); i++){
        auto a = lower_bound(st.begin(), st.end(), intervals[i][1]);
        if (a != st.end() && *a == intervals[i][1])
            res.push_back(m[st[lower_bound(st.begin(), st.end(), intervals[i][1]) - st.begin()]]);
        else
            res.push_back(-1);
    }
    return res;

}

int main()
{
    vector<vector<int>> v {{1,4},{2,3},{3,4}};
    vector<int> ans = findRightInterval(v);
    for (auto i : ans)
        cout << i << " ";
}
