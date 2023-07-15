//https://practice.geeksforgeeks.org/problems/twice-counter4236/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
        	map<string, int> m = {};
        	int res = 0;
        	for (int i = 0; i < n; i++)
        		m[list[i]]++;
        	for (auto it : m)
        		if (it.second == 2) res++;
        	return res;
        }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends