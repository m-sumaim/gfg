//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> sol;
        
      
        sort(arr, arr+n);
        for(int i=1; i<n; i++)
        {
            if(arr[i] == arr[i-1])
            {  
                if(sol.size() ==0 || sol.back() != arr[i]) 
                    sol.push_back(arr[i]);
            }
            
        }
        if(sol.size() == 0){
           sol.push_back(-1);
           return sol;
        }
      
        return sol;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends