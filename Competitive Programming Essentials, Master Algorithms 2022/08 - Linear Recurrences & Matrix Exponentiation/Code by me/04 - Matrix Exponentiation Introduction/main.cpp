#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;
const int sz = 2;

struct Matrix{
    int mat[sz][sz];
    Matrix() {
		memset(mat, 0, sizeof(mat));
	}
	void set1(){
        for (int i = 0; i < sz; i++)
                mat[i][i] = 1;
    }
    Matrix operator* (Matrix x){
        Matrix ans;
        for (int i = 0; i < sz; i++)
            for (int z = 0; z < sz; z++)
                for (int k = 0; k < sz; k++){
                    ans.mat[i][z] += mat[i][k] * x.mat[k][z];
                    //ans.mat[i][z] %= mod;
                }
        return ans;
    }
    void print(){
        for (int i = 0; i < sz; i++){
            for (int z = 0; z < sz; z++)
                cout << mat[i][z] << " ";
            cout << "\n";
        }
        cout << "\n";
    }
};

int fib(int n){
    Matrix x, t;
    x.set1();
    t.mat[0][0] = t.mat[0][1] = t.mat[1][0] = 1;
    if (n <= 2)
        return 1;
    n-=2;
    while (n > 0){
        if (n & 1) x = x * t;
        t = t * t;
        n >>=1;
        //x.print();
        //t.print();
    }
    return x.mat[0][0] + x.mat[0][1];
}

int main()
{
    cout << fib(4);
}
