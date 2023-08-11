//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int n, int sum) 
	{ 
	    // Your code goes here
	    vector<int> dp(sum+1, sum+1);
	    dp[0] = 0;
	    for(int i=0; i<n; i++)
	    {
	       for(int j=1; j<sum+1; j++)
	            if(coins[i] <=j)
	                dp[j] = min(1+dp[j-coins[i]], dp[j]);
	    }
	    return dp[sum] == sum+1? -1:dp[sum];
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends