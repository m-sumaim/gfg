//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void helper(set<string> &sol, string S, int l, int r)
	    {
	        if(l==r)
	        {
	            sol.insert(S);
	            return;
	        }
	        
	        for(int i=l; i<r; i++)
	        {
	            swap(S[i], S[l]);
	            helper(sol, S, l+1, r);
	            swap(S[i], S[l]);
	        }
	    }
	
	
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> res;
		    set<string> sol;
		    int n = S.length();
		    helper(sol, S, 0, n);
		    int m = sol.size();
		    for(auto i : sol)
		        res.push_back(i);
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends