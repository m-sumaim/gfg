//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> ans;
        int start, end;
        int buy = 1;
        // buy = 1 (buying is allowed)
        // buy = 0 (buying is not allowed)
        
        
        for(int i=0; i<n-1; i++)
        {
            if(buy == 1)
            {
                if(A[i] < A[i+1])
                {
                    buy = 0;            // don't allow buying now
                    start = i;              // now set start as i
                }
            }
            else
            {
                if(A[i] > A[i+1])
                {
                    end = i;
                    ans.push_back({start, end});        // add pair to solution
                    buy = 1;                            // set buy to solution
                }
            }
        }
        // after end of loop, if still the stock is not sold, we'll sell at the last stock  value
    
        if(buy == 0)
            ans.push_back({start, n-1});
        
        return ans;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends