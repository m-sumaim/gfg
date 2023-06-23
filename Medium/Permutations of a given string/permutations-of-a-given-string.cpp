//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
        void helper(string s, int ind, set<string> &st)
        {
            if(ind == s.size() - 1){            // insert into sol only when we reach till end(l == r)
                st.insert(s);
                return;
            }
            
            for(int i= ind; i<s.size(); i++)
            {
                swap(s[i], s[ind]);             // swap
                helper(s, ind+1, st);
                swap(s[i], s[ind]);             // backtract to get original
            }
        }
    
	public:
	
// Time : O(N* N!)
// Space : O(N * N!)
	    
		vector<string>find_permutation(string s)
		{
		   vector<string> ans;
		   set<string> st;
		   helper(s, 0, st);
		   for(auto it: st)
		        ans.push_back(it);
		  
		  return ans;
		   
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