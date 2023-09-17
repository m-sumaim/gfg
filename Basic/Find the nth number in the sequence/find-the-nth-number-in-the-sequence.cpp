//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int get(long long int n){
        //complete the function here
       n--;
       int i=1;
       while(n>=0){
           n -=i;
           i++;
       }
       return (n+i);
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.get(n) << endl;
    
    }
    return 0; 
} 


// } Driver Code Ends