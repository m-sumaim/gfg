//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    // bottom up approach (tabulation)
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int ans {};
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
        
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                
                int maxx = 0;
                if(S1[i] == S2[j])
                {
                    maxx = 1 + dp[i+1][j+1];
                    ans = max(ans, maxx);
                }
                
                dp[i][j] = maxx;
            }
            
        }
        
        return ans;
    }
    
 
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends