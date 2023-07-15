#include <iostream>
#include<vector>
using namespace std;
//Bo qua
int findUnsortedSubarray(vector<int> &nums){
    //2 cach thong tri:
    //Cach 1:
    //Sort toan bo mang, sau do xem coi thu tu dau tien va cuoi cung khac nhau
    //vd
    //Truoc khi sort: 1 3 2 4 6 5 8 7 9
    //Sau khi sort    1 2 3 4 5 6 7 8 9
    //                  |   |       |
    //Cach 2: Kiem tra day tang dan/giam dan deu
    //Vd: 1 3 2 4 5 8 7 9 10
    //      < > < < < > < <
    //      |         |
    //Va so sanh voi max
    int st {0}, en{0}, ma_st{0}, cs_ma{0}; bool isSta = true;
    int ma_st {nums[0]}, cs_ma {0};
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i-1] || nums[i] < ma){
            if (isSta) {isSta = false; st = cs_ma; en = i;}
            else en = i;
        }
        else if (nums[i] > nums[i-1]){
            ma_st = nums[i];
            cs_ma = i;
        }
    }
    cout << en << " " << st << "\n";
    if (en - st == 0)
        return 0;
    else
        return en - st + 1;
}
int main()
{
   vector<int> v {2,3,3,2,4};
   //vector<int> v {1,2,3,4,5,6,7,8,9,10};
   cout << findUnsortedSubarray(v);
}
