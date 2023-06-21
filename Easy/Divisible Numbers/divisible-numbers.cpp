//{ Driver Code Starts



#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends



class Solution{
public:
    long long int find(long long int A,long long int B){ 
       //code here
       
       
       
       if(A<B)
            return B; 
        
       long long int x = A % B;
       long long int y = B -x ;
       
       return A + y;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B;
        cin>>A>>B;
        Solution ob;
        cout << ob.find(A,B) << endl;
    }
    return 0; 
}
// } Driver Code Ends