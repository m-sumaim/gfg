//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void helper(vector<int> &A, int target, int i, vector<int> &res, vector<vector<int>> &cs)
    {
        if(i == A.size())
        {
            if(target==0)
            {
                cs.push_back(res);
            }
            return;
        }
        if(A[i] <= target)
        {
            res.push_back(A[i]);
            helper(A, target-A[i], i, res, cs);
            res.pop_back();                         // backtracking
        }   
        helper(A, target, i+1, res, cs);            // not picking element
    }   
    
    vector<vector<int> > combinationSum(vector<int> &A, int target) {
        // Your code here
        vector<vector<int>> cs;
        vector<int> res;
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        helper(A, target, 0, res, cs);
        return cs;
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
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends