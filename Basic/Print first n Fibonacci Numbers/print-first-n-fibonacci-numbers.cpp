//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> sol;
        long long prev1 = 1;
        sol.push_back(prev1);
        if(n==1)
            return sol;
        long long prev2 = 1;
        sol.push_back(prev2);
        if(n==2)
            return sol;
        
        
        for(int i=2; i<n; i++){
            long long temp = prev1 + prev2;
            sol.push_back(temp);
            prev1 = prev2;
            prev2  = temp;
        }
        
        return sol;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends