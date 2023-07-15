#include <iostream>
#include <vector>
using namespace std;

bool check(vector<vector<int>> v, int ro, int co){
    if (ro < 0 || ro >= v.size())
        return false;
    if (co < 0 || co >= v[0].size())
        return false;
    return true;
}

void bfs(vector<vector<int>> &v, int ro, int co, int old, int change,  vector<vector<bool>> &isVisited){
    //Check: 3 dieu kien: Co ngoai vung khong, da tham chua, thoa man dieu kien de bai (cung mau)
    if (check(v, ro, co) == false || isVisited[ro][co] || v[ro][co] != old)
        return;
    //Danh dau theo de bai va danh dau diem do da di qua
    v[ro][co] = change; isVisited[ro][co] = true;
    //De quy tim tiep: Chon 4 huong, thay the doi tuong row, col.
    //Neu co 8 huong thi 8 huong phai de quy
    bfs(v, ro-1, co, old, change, isVisited);
    bfs(v, ro+1, co, old, change, isVisited);
    bfs(v, ro, co+1, old, change, isVisited);
    bfs(v, ro, co-1, old, change, isVisited);
}

int main()
{
    vector<vector<int>> v {
        {1,1,1,1,1},
        {1,1,1,0,1},
        {1,1,0,0,0},
        {0,0,0,1,0}};
    vector<vector<bool>> check (v.size(), vector<bool>(v[0].size()));
    bfs(v, 1, 1, v[1][1], 2, check);
    for (auto i : v){
        for (auto z : i)
            cout << z << " ";
        cout << "\n";
    }

}
