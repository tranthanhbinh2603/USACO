//https://www.interviewbit.com/problems/painters-partition-problem/
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

const int maxC = 1e5;
int C[maxC];

 bool isAllocationPossible(int arr[], int n, int k, long long maxtime)
    {
        
        int pnt = 1; // no. of painters
        long long curr_time = 0;
        for(int i = 0; i < n; ++i)
        {
            curr_time += arr[i];
            if(curr_time > maxtime)
            {
                ++pnt;
                if(pnt > k)
                    return false;
                curr_time = arr[i];
            }
        }
        return true;
    }

int paint(int A, int B, int*C, int n3) {
	long long res = LLONG_MAX;
    long long low = *max_element(C, C+A), high = accumulate(C, C+A, 0L);
    while(low <= high)
    {
        long long mid = low + (high - low) / 2;
        if(isAllocationPossible(C, A, B, mid))
        {
            
            high = mid - 1;
        }
        else{
        	res = low;
            low = mid + 1;
        }
    }
    return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b; 
	cin >> a >> b;
	int n3; cin >> n3;
	for (int i = 0; i < n3; i++)
		cin >> C[i];
	cout << paint(a, b, C, n3);
}