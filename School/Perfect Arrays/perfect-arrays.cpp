//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        if(n==1)
            return true;
        // Complete the function
        int i=0;
        int j = n-1;
        if(n % 2 == 0)
        {
            for(i,j; i<j; i++, j--)
                if(a[i] != a[j])
                    return false;
        }else{
            for(i,j; i!=j; i++, j--)
                if(a[i] != a[j])
                    return false;
        }
        
        return true;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends