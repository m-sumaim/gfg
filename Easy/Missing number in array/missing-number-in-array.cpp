//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
                    //Simple Approach
     vector<bool> seen (n+1, false);
     for(int i=0; i<array.size(); i++){
         seen[array[i]] = true;
     }
     for(int i=1; i<=n; i++){
            if(seen[i] == false)
                return i;
     }
     
     return -1;
     
     // Approach 2
     
     // We can also do this by taking XOR
    //  int xor=0;
    //     for(int x:arr)
    //         xor=xor^x;
    //     for(int i=1;i<=n;i++)
    //         xor=xor^i;
    //     return xor;
    
     // Approach 3
    //  int reqSum=(n*(n+1))/2;
    //     int curSum=0;
    //     for(int i=0;i<n-1;i++)
    //      curSum+=array[i];
    //     return reqSum-curSum;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends