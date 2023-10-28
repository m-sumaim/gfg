//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countset(int n){
        int cnt = 0;
        while(n>0){
            if(n%2 == 1)
                cnt++;
            n = n/2;
        }
        return cnt;
    }

	int is_bleak(int n)
	{
	    // Code here.
	    if(n<=32){
	        for(int j=1; j<n; j++)
	            if(j + countset(j) == n)
	                return 0;
	    }else{
	        for(int j= n-32; j<=n; j++){
	            if(j + countset(j) == n)
	                return 0;
	        }
	    }
	    
	    return 1;
	    
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends