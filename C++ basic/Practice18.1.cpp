//https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
//Không ac đâu. Chỉ dùng để thị phạm thôi
class Solution {
  public:
    long long int nthFibonacci(long long int n){
    	long long int M = 1000000007;
        if (n == 2) return 1;
        if (n == 1) return 1;
        return (nthFibonacci(n - 1) + nthFibonacci(n - 2)) % M;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends