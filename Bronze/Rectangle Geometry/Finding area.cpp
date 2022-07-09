#include <iostream>
using namespace std;

int areaintersect(vector<int> a; vector<int> b)
{
    int tr_a_x = a[0], tr_a_y = a[1], bl_a_x = a[2], bl_a_y = a[3];
    int tr_b_x = a[0], tr_b_y = a[1], bl_b_x = a[2], bl_b_y = a[3];

    return (min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) * min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y);//min tr, max bl, dai y rong x.
    //Kiem tra giao nhau: Doi nhau, lon hon x, nho hon y.
}
