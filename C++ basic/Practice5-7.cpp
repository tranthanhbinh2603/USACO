//{Driver Code Starts
// Initial Template forC++
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    	cin >> a[i];
    rotate(a, n);
    for (int i = 0; i < n; i++)
    	cout << a[i] << " ";
}

void rotate(int arr[], int n)
{
    int arrcp[n];
    arrcp[0] = arr[n - 1];
    for (int i = 1; i < n + 1; i++)
    	arrcp[i] = arr[i - 1];
    for (int i = 0; i < n; i++)
    	arr[i] = arrcp[i];
}