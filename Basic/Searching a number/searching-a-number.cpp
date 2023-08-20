//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(int arr[], int n, int k) {
	    // code here
	    int res = -1;
	    for(int i=0; i<n; i++)
	        {
	        if(arr[i] == k)
	          {
	              return res = i+1;
	          }
	        }
	        return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.search(a, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends