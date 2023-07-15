//https://codeforces.com/problemset/problem/230/B
//Code không AC
/*#include <iostream>
//#include <math.h>
#include <set>
using namespace std;


//Không ac vì nó có sai số trong hàm sqrt
// bool isPrime(long long int a)
// {
// 	cout << a << "\n";
// 	if (a <= 1) return false;
// 	for (long long int i = 2; i < sqrt(a); i++)		
// 		if (a % i == 0) return false;
// 	return true;
// }

//AC
int hsh[(int)1e6+10];
set<int> T_prime;
void gen_T_prime()
{	
	T_prime.insert(4);
	 for(int i=3;i<(int)1e6+100;i+=2)
	{
		if (hsh[i] == 0)
		{
			T_prime.insert(i * i);
			for(int j=i;j<=1e6+1;j+=i)
				hsh[j] = 1;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t; cin >> t;
	gen_T_prime();
	while (t--)		
	{
		int temp = 0; cin >> temp;
		//Không ac do sqrt có sai số.
		/*double sqrt1 = sqrt(temp); cout << sqrt1 << "\n";
		double phanthapphan = sqrt1 / 1.0 - (int)sqrt1;
		//if (slove(temp)) cout << "YES\n"; else cout << "NO\n";*/

// 	}
// }*/

#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>
using namespace std;
#define int int64_t
int ar[(int)1e6+10];
set<int> tprime;
void t_primes()
{
    tprime.insert(4);
    for(int i=3;i<(int)1e6+1;i+=2)
    {
        if(ar[i]==0)
        {
            tprime.insert(i*i);
            for(int j=i;j<=1e6;j+=i)
            {
                ar[j]=1;
            }
        }
    }
}
int32_t main()
{
    int n;cin>>n;
    t_primes();
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(tprime.find(x)!=tprime.end())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}