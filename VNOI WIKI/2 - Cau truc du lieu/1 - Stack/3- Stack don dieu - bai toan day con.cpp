#include <iostream>
#include <stack>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		stack<int> st;
		int L[n + 1], R[n + 1];
		for (int i = 1; i <= n; ++i)
		{
			while (!st.empty() && a[st.top()] <= a[i])
			    st.pop(); 
			int ans = -1;
			if (!st.empty())
			    ans = st.top();
			L[i] = a[ans];
			cout << ans << " ";
			st.push(i);
		}
		cout << "\n";
		for (int i = n; i >= 1; --i)
		{
			while (!st.empty() && a[st.top()] <= a[i])
			    st.pop(); 
			int ans = -1;
			if (!st.empty())
			    ans = st.top();
			R[i] = a[ans];
			cout << ans << " ";
			st.push(i);
		}
		int ans = 0;
		for (int i = 1; i <= n; i++)
			ans = max(ans, (R[i] - L[i] - 1) * a[i]);
		cout << ans << "\n";
	}	
}