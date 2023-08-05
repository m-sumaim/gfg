//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long mini = a[0], maxi = a[m-1];
    long long diff = maxi-mini;
    
    if(n==m)
        return diff;
        
    for(int i=m; i<n; i++)
    {
        maxi = a[i];
        mini = a[i-m+1];
        long long dif = maxi-mini;
        diff = min(diff, dif);
    }
    return diff;
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends