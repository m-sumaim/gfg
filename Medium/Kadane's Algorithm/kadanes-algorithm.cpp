//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long curr_sum = 0, max_sum = INT_MIN;
        for(int i=0; i<n; i++)
        {
            curr_sum += arr[i];
            if(max_sum < curr_sum)
            {
                max_sum = curr_sum;
                
            }
            if(curr_sum < 0)
                curr_sum =0;
        }
        return max_sum;
        
    }
    // Algorithm
// Initialize the variables max_so_far = INT_MIN and max_ending_here = 0
// Run a for loop from 0 to N-1 and for each index i: 
// Add the arr[i] to max_ending_here.
// If  max_so_far is less than max_ending_here then update max_so_far  to max_ending_here.
// If max_ending_here < 0 then update max_ending_here = 0
// Return max_so_far
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends