//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        
        int x;
        int val;
        if(N == 1)
            return K;
        
       
        
        if(N % 2 == 1){
            x = N/2 + 1;
            val = x * K;
        }else{
            x = N/2;
            val = x * K;
        }
        
        return val;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends