#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <iomanip>
#include <map>
#include <math.h>
using namespace std;

typedef long long ll;
typedef vector<vector<char>> GRAPH_C;
typedef vector<vector<ll>> GRAPH_NUM;
typedef vector<vector<bool>> GRAPH_BOOL;
#define rep(i,a,b) for (register ll i=(a);i<=(b);i++)
#define drep(i,a,b) for (register ll i=(a);i>=(b);i--)
#define pll pair<ll, ll>
#define fi first
#define se second
#define vll vector<ll>
#define pub push_back

string sum_string(string s1, string s2){
    string res;
    if (s1.size() > s2.size())
        swap(s1,s2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for (int i = 0; i < s1.size(); i++){
        int n1 = (int)(s1[i] - '0');
        int n2 = (int)(s2[i] - '0');
        int r = n1 + n2 + carry;
        res.push_back((char)(r % 10 + '0'));
        carry = r / 10;
    }
    for (int i = s1.size(); i < s2.size(); i++){
        int n = (int)(s2[i] - '0');
        int r = n + carry;
        res.push_back((char)(r % 10 + '0'));
        carry = r / 10;
    }
    if (carry){
        res.push_back('1');
    }
    reverse(res.begin(), res.end());
    return res;
}
 
string mul_string(string a, int b){
    string ans = "";
    reverse(a.begin(), a.end());
    int carry = 0;
    for (int i = 0; i < a.size(); i++){
        int temp = (int)(a[i] - '0') * b + carry;
        ans.push_back((char)(temp % 10 + '0'));
        carry = temp / 10;
    }
    while (carry > 0){
        ans.push_back((char)(carry % 10 + '0'));
        carry /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
 
string mul_string(string s1, string s2){
    string res;
    if (s1 == "0" || s2 == "0")
        return "0";
    if (s1.size() < s2.size())
        swap(s1,s2);
    reverse(s2.begin(), s2.end());
    drep(i,s2.size() - 1,0){
        string k = mul_string(s1, (int)s2[i] - 48);
        res = sum_string(res + "0", k);
    }
    return res;
}
 
map<ll, ll> ptnt(ll n){
    map<ll, ll> m;
    if (n == 1){
        m[1] = 1;
        return m;
    }
    while (n % 2 == 0){
        m[2]++;
        n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i+=2)
        while (n % i == 0){
            m[i]++;
            n /= i;
        }
    if (n > 2)
        m[n]++;
    return m;
}

//https://leetcode.com/problems/house-robber/
class Solution {
public:
    int d[1005];
    int dp(vector<int>&nums, int n, int take){
        if (n == nums.size() + 1)
             return d[nums.size() + 1] = 0;
        if (d[n] != -1)
            return d[n];
        int ans = 0;
        if (take == 1)
             ans += dp(nums, n + 1, 0) + nums[n];
        else 
             ans += max(dp(nums, n + 1, 0), dp(nums, n + 1, 1));
        return d[n] = ans;
    }

    int rob(vector<int>& nums) {
        vector <int> reaL (nums.size());
        reaL[0] = 0;
        for(int i = 0; i < nums.size(); i++)
            reaL[i + 1] = nums[i];
        for(int i = 0; i < 1000; i++)
            d[i] = -1;
        return dp(reaL, 0, 0);
    }
};

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> nums;
    rep(i,1,n){
        int t; cin >> t;
        nums.pub(t);
    }
    Solution s;
    cout << s.rob(nums);
}