//https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  	vector<vector<int>> ans = {};
    //Chưa tối ưu: Gen từng phần tử
  	void gen1(set<int> &A, int b, vector<int> &current)
  	{
  		if (accumulate(current.begin(), current.end(), 0) == b){
        vector<int> a = current;
        sort(a.begin(), a.end());
  			ans.push_back(a);
  			return;
  		}
      if (accumulate(current.begin(), current.end(), 0) > b)
        return;

  		for (int i : A){
  			current.push_back(i);
  			gen1(A, b, current);
  			current.pop_back();
  		}
  	}
    //Tối ưu hơn: đi từ số cần tìm đến kết quả (vẻ cây backtrack từ số cần tìm trừ tùng phần tử khác biệt)
    //Và so sánh xem phần tử tìm nó có lớn hơn giá trị tìm hay không, nếu có xoá cây
    // void gen2(set<int> &A, int b, vector<int> &current)
    // {
    //     if (b == 0)
    //     {
    //          vector<int> a = current;
    //         sort(a.begin(), a.end());
    //         ans.push_back(a);
    //         return;
    //     }
    //     for (int i: A)
    //     {
    //         if (b < i) return;
    //         current.push_back(i);
    //         gen2(A, b-i, current);
    //         current.pop_back();
    //     }
    // }
    
    //AC: Đầu tiên ta sort và ta loại bỏ các phần tử trùng, khi đó mình có thể chọn các phần tử từ thấp lên đến cao.
    //Nếu như giá trị còn lại không thể cộng tăng lên index
    //Giá trị index = A.size(), ta check thằng b có bằng 0, tức là bằng kết quả. Nếu đúng thêm vào kết qủa
    void gen3(vector<int> &A, int b, int index, vector<int> &current)
    {
        if (index == A.size()){
            if (b == 0)
                ans.push_back(current);
            return;
        }

        if (A[index] <= b)
        {
            current.push_back(A[index]);
            gen3(A, b-A[index], index, current);
            current.pop_back();
        }
        gen3(A, b, index+1, current);
    }

    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        //Không tối ưu.
        // set<int> A1;
        // for (int i:A) A1.insert(i);
        // vector<int> current;
        // gen1(A1,B,current);
        // sort(ans.begin(), ans.end());
        // ans.erase(unique(ans.begin(), ans.end()), ans.end());
        // return ans;

        //Cách 2
        // set<int> A1;
        // for (int i:A) A1.insert(i);
        // vector<int> current;
        // gen2(A1,B,current);
        // sort(ans.begin(), ans.end());
        // ans.erase(unique(ans.begin(), ans.end()), ans.end());
        // return ans;

        //Cách 3
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        vector<int> current; int i = 0;
        gen3(A, B, i, current);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")" << endl;
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends