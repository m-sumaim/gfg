//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        // for the given range we leftshift '1' by 'i' and see if it's set in 'y'
        // if set, then we perform an OR with X, for that particular ith bit in y (i.e after left shift)
        
        for(int i=l; i<=r; i++)
        {
            if((y & (1 << (i-1))) != 0)             // if ith bit in y is set (1- based indexing)
                x = x|(1<<(i-1));
            
        }
        return x;
    }
};

// Here we don't convert int to bit, because bit wise operators can directly work on decimals

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends