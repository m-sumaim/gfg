//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
  // Tabulation DP
    long long int nthFibonacci(long long int n){
        // code here
        long long dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            dp[i]  = (dp[i-1]+dp[i-2]) % 1000000007;                // to prevent overflows
        }
        
        return dp[n];
    }
    
    // memoization based solution
    // long long dp[1001];
    // long long int solve(long long int n)
    // {
    //     if(n==0)
    //         return 0;
    //     if(n==1)
    //         return 1;
    //   if(dp[n] != -1)
    //         return dp[n];
    //     return dp[n] = (solve(n-1) + solve(n-2)) % 1000000007;               //taking mod for very large inputs
    // }
   
    // long long int nthFibonacci(long long int n){
    //      memset(dp, -1, sizeof(dp));
    //      solve(n);
    // }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends