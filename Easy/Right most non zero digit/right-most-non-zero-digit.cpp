//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
  public:
    int rightmostNonZeroDigit(int n, int a[]){
        
// Approach: 
 
// -The question is too simple if you know basic maths. It is given that you have to find the rightmost positive digit. 
// Now a digit is made multiple of 10 if there are 2 and 5. They produce a number with last digit 0.

// -Now what we can do is divide each array element into its shortest divisible form by 5 
// and increase count of such occurrences.

// -Now divide each array element into its shortest divisible form by 2 and decrease count of such occurrences.
// This way we are not considering the multiplication of 2 and a 5 in our multiplication.

// -Set the multiplier value as either 1 or 5 in case count of 5 is not 0 after above two loops.

// -Multiply each array variable now and store just last digit by taking remainder by 10
        
        
        
        int c5 = 0;
        for(int i=0; i<n; i++)
        {
            while(a[i]>0 && a[i] % 5 ==0){
                
                a[i] /=5;
                c5++;
            }
        }
        
        for(int i=0; i<n; i++){
            while(c5 && a[i]>0 && a[i]%2 ==0)
            {
                a[i] = a[i]/2;
                c5--;
            }
        }
        long long ans = 1;
        for(int i=0; i<n; i++){
            ans = (ans*a[i] % 10) % 10;
        }
        
        if(c5)
            ans = (ans * 5) % 10;
        
        if(ans)
            return ans;
        
        return -1;
        
        
        
        
        // The code below doesn't work for large value and gives error  with 10005/10124 cases passed
        // long long sum = 1;
        // if(N==0)
        //     return -1;
        // for(int i=0; i<N; i++)
        // {   
        //     sum *= A[i];
        //     if(sum ==0)
        //         return -1;
        // }
        
            
        
        // int x;
        // while(sum>0){
        //     x = sum % 10;
        //     if(x != 0)
        //         return x;
        //     sum = floor(sum / 10);
            
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
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        Solution ob;
        cout << ob.rightmostNonZeroDigit(n, A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends