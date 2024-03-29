//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long arr[n+4];
        long long mod = 1e9 + 7;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 4;
        for(int i=4; i<=n; i++)
            arr[i] = (arr[i-1] + arr[i-2] + arr[i-3]) % mod;
        
        return arr[n];
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends