//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isPossible(int arr[], int n, int k, int mid)
    {
        int req = 1, sum = 0;
        for(int i=0; i<n; i++)
        {
            if(sum + arr[i] > mid){
                req++;
                sum = arr[i];
            }else{
                sum += arr[i];
            }
        }
        return (req <= k);
    }
    
    
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int k) 
    {
        //code here
        if(k > n)
            return -1;
        
        int sum = 0, mxPg = 0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            mxPg = max(mxPg, arr[i]);
        }
        int low = mxPg, high = sum;
        int res = 0;
        while(low <= high){
            int mid = (low + high)/2;
            if(isPossible(arr, n, k, mid)){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends