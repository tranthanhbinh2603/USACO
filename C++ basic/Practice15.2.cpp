//https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1
#include <bits/stdc++.h>
using namespace std;
const long int maxarr = 1e6;
long long hashA[maxarr];

class Solution{
	public: vector<long long> findMissing(long long A[], long long B[], int N, int M) 
	{ 		
	    vector<long long> a;
		for (int i = 0; i < M; i++)
            hashA[B[i]] = 1;        
        for (int i = 0; i < N; i++)
            if (hashA[A[i]] != 1) a.push_back(A[i]);
	    return a;
	} 
};

int main() 
{
	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    cout << "\n";	     
    }
    return 0;
}