//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.length();
        string t = S;
        reverse(t.begin(), t.end());
        int dp[n+1][n+1];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(S[i-1] == t[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return n - dp[n][n];            // dp[n][n] will contain the length of the palindrome possible
                                        // so we return n - dp[n][n]
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends