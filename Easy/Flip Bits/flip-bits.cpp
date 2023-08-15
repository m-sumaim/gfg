//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
         // Now i go threw best approach and i find kadane's algorithm solve that problem in t.c o(n) and space in o(1)
        
        // first count the one   and make all the one to -1 , and zero to 1 , and apply algorithm to get max sum 
        
        // Algo:
// 1. Count no. of 1,  here oneCnt = 2

// 2. Flip all 0 to 1 and all 1 to -1 ( for finding the subarray containing maximum zero) now ar = [-1,1,1,-1,1]

// 3. according to Kadane's algo maximum sum  subarray of ar = 3 , which is the maximum zero subarray (after 0 converting to 1)
//    so total 1's =  1's already present in ar + 1's after fliping maximum zero subarray so return oneCnt + maxSum(from kadane's algo)


        int maxSum, currSum, oneCnt;
        maxSum = currSum = oneCnt = 0;
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==1)
                oneCnt++;
            int val = a[i] ==0 ?1:-1;       //flip 0->1 and 1->-1;
            currSum += val;
            maxSum = max(maxSum, currSum);
            if(currSum <0)
                currSum = 0;
        }
        return oneCnt + maxSum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends