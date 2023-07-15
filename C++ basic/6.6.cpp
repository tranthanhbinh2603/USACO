//https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	int cth_num;
	for (int i=2; c > 0; i++){
    	if(i % a == 0 || i % b == 0){
        	c--;
        	cth_num =i;
        	cout << cth_num << endl;
   		}
	}
	cout << cth_num << endl;
}