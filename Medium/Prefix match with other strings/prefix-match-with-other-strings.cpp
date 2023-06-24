//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
//Approach 1
    // int klengthpref(string arr[], int n, int k, string str){    
    //     if(str.size() < k)
    //         return 0;
        
    //     int cnt = 0;
        
    //     for(int i=0; i<n; i++)
    //     {
    //         int ok = 1;
    //         for(int j=0; j<k; j++)
    //         {
    //             if(arr[i][j] != str[j])            // if jth char of ith string isn't equal to jth char to the string
    //                 ok = 0;                         // set ok to false
    //         }
    //         cnt += ok;
            
    //     }
        
    //     return cnt;
    // }
    
// Approach 2
    int klengthpref(string arr[], int n, int k, string str){
        if(str.size() < k)
            return 0;
        int count = 0;
        
        string temp = str.substr(0, k);
        
        for(int i=0; i<n; i++)
        {
            if(arr[i].substr(0,k) == temp)
                count++;
        }
        
        return count;
        
        
        // T.C -> O(N*K)
        // S.C -> (1)
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends