//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        // code here
        long long int res = 1;
        while(n%2==0)                  // if divisible by 2, keeping dividing
         {
             n /= 2;
             res = 2;
         }
        
        for(int i=3; i<=sqrt(n); i+=2)       // only odd no. are prime after 2, so check for it continuously
        {
            while(n%i == 0)
            {
                n/=i;
                res = i;
            }
        }
        
        if(n>2)
            res = n;
        
        return res;
        
        // Intuition
        // 1) While n is divisible by 2, print 2 and divide n by 2.
        // 2) After step 1, n must be odd. Now start a loop from i = 3 to the square root of n.
        // While i divides n, print i, and divide n by i. After i fails to divide n, increment i by 2 and continue.
        // 3) If n is a prime number and is greater than 2, then n will not become 1 by the above two steps. 
        // So print n if it is greater than 2.
        
        //  Simpler solution
        
        // if(n<=1)
        //     return 0;
        
        // for(int i = 2; i<=sqrt(n); i++)
        // {
        //     if(N%i == 0)
        //     {
        //         N/=i;
        //         i--;
        //     }
        // }
        // return n;
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
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends