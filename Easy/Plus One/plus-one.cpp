//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        // code here
       vector<int> result;
       int carry = 1;
       for(int i=n-1; i>=0; i--)
       {
           int sum = arr[i] + carry;
           carry = sum/10;
           result.push_back(sum%10);
       }
       while(carry>0)
       {
           result.push_back(carry%10);
            carry /=10;
       }
        
        reverse(result.begin(), result.end());
        return result;
       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends