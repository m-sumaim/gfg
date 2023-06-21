//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
     
  public:
    int sumOfNaturals(int n) {
        // code here
          long mod=1000000007;
        return (int)((((n%mod)*((n+1)%mod))/2)%mod);
        //Intutation:
        // Use Modular arithmetic
        
        // modulo operation on multiplication - >
        // (a*b)%x = ((a%x)*(b%x))%x ;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends