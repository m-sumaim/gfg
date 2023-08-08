//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int num[], int den[])
    {
        // create fractions in vector<double> and find the pair
        // for every 'i' check if '1-i' is present
        vector<double>fractions;
        for(int i=0; i<n; i++)
        {
            double frac = (double)(num[i])/(double)(den[i]);
            fractions.push_back(frac);
        }
        unordered_map<string, int>mp;
        int count = 0;
        for(double i : fractions)
        {
            double target = 1.0-i;
            string key = to_string(i);
            count += mp[key];
            mp[to_string(target)]++;
        }
        
        return count;
        
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
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends