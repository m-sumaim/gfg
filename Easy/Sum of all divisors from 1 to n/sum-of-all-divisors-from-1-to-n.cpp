//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
// TLE
    // long long helper(int n, long long &sum){
    //     for(int i=1; i<= n; i++)
    //     {
    //         if(n%i==0)
    //             sum += i;
    //     }
    //     return sum;
    // }
    // long long sumOfDivisors(int N)
    // {
    //     // Write Your Code here
    //     long long sum = 1;
    //     if(N == 1)
    //         return 1;
    //     for(int i=2; i<=N; i++){
    //         helper(i, sum);
            
    //     }
    //     return sum;
    // }
    
// required
    long long sumOfDivisors(int N){
        long long sum = 0;
        for(int i=1; i<=N; i++){
            sum += i*(N/i);
        }
        return sum;
    }
// every i(0 to n) occurs n/i times
// so multiply their frequencies with i and keep adding it to the sum
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends