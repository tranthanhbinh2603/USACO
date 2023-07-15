#include<iostream>
#include<vector>
using namespace std;

#define N 100000

int sieveArr[N+1] = {0};
vector<int> primes;

//Sieve of Eratosthenes (O(NLogLogN))
void sieve(){
	for(long long i=2; i<=N; i++){
		//mark non primes as 1
		if(sieveArr[i]==0){
			primes.push_back(i);
			//marking all multiples of i (prime) as non-prime
			for(long long j= i*i; j<=N; j+=i){
				sieveArr[j] = 1; //non-prime
			}
		}
	}
}

vector<int> prime_seg(int m, int n){
    vector<int> segment(n-m+1,0);
    for(auto p : primes){
        if( p*p > n){
            break;
        }

    int start = (m/p) * p;
    if(p>=m and p<=n){
        start = 2 * p;
    }

    for(int j = start; j<=n; j = j + p){
        if(j < m){
            continue;
        }
        //non-prime
        segment[j - m] = 1;
        }
    }
    //Quet dung
    //for(int i=m; i<=n; i++){
    //    if(segment[i-m]==0 and i!=1){
    //        cout<<i<<endl;
    //    }
    //}
    return segment;

}

// Segmented Sieve

int main(){

	//Precompute
	sieve();
	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>m >> n;

		vector<int> segment = prime_seg(m, n);

		for(int i=m; i<=n; i++){
			if(segment[i-m]==0 and i!=1){
				cout<<i<<endl;
			}
		}
		cout<<endl;

	}

	return 0;
}


