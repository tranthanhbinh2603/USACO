//https://practice.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1
#include <iostream>
#include <vector>
using namespace std;

int sumOfRowCol(int N, int M, vector<vector<int>> A) {
    int rowSum=0, colSum=0, flag=0;
       for(int i=0; i<N; i++){
           for(int j=0; j<M;j++){
               rowSum += A[i][0];
               colSum += A[0][j];
           }
       }
       if( rowSum == colSum)
           flag = 1;
       else
           flag = 0;
       return flag;
}

int main()
{
	int r, c;
	cin >> r >> c;

	vector<vector<int>> A;
	for (int i = 0; i < r; i++)
		for (int z = 0; z < c; z++)
			cin >> A[i][z];
	int a = sumOfRowCol(r,c,A);
}