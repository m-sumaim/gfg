//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPalindrome(string &s, int i, int j)
    {
        while(i<=j)
            if(s[i++] != s[j--])
                return false;
        
        return true;
    }


    int palindromicPartition(string str)
    {
        // code here
        int n = str.size();
        int t[n+1] = {0};
        t[n] = 0;
        for(int i=n-1; i>=0; i--)
        {
            int mini = INT_MAX;
            for(int j=i; j<n; j++)
            {
                if(isPalindrome(str, i, j))
                {
                    int ans = 1 + t[j+1];
                    mini = min(mini, ans);
                }
                t[i] = mini;
            }
        }
        return t[0] - 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends