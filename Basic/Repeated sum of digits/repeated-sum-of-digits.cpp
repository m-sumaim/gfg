//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int repeatedSumOfDigits(int N){
        // code here 
        
        // as per question we need to solve in O(1)
        if(N%9 == 0)
            return 9;
        else
            return N%9;
            
        
        // An intutive solution
        
        // int ans = 0;
        // if(N<10)
        //     return N;
        // else
        // {
        //     while(N!=0){
        //         ans += N%10;
        //         N /= 10;
        //     }
        //     return repeatedSumOfDigits(ans);
        // }
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.repeatedSumOfDigits(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends