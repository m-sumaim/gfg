//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  // using prefix sum
  // https://www.geeksforgeeks.org/smallest-sum-contiguous-subarray/
  int smallestSumSubarray(vector<int>& a){
      //Code here
      int n = a.size();
      
      for(int i=0; i<n; i++)
        a[i] = a[i] * -1;
    
      int curr_Sum = 0;
      int maxSum = a[0];
      
      for(int i=0; i<n; i++)
      {
          curr_Sum += a[i];
          maxSum = max(maxSum, curr_Sum);
          if(curr_Sum < 0)
            {
                curr_Sum = 0;
                maxSum = max(maxSum, a[i]);
            }
      }
      return -maxSum;
      
      
  }
};

// Using Kadane's Algorithm
// kadans algo→ find maximum sum subarray
// reverse kandan algo → find minimum sum subarray 
// (to convert kadans in reverse kadans just multiply all value with -1 and 
// now apply kadans algo to find maximums sum subarray and at last multiply ans by -1) 


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends