//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void helper(vector<int> &A, int i, vector<int> &res, vector<vector<int>> &ss)
    {
        if(i >= A.size())
        {
            ss.push_back(res);
            return;
        }
        res.push_back(A[i]);
        helper(A, i+1, res, ss);
        
        res.pop_back();
        helper(A, i+1, res, ss);
    }
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>> ss;
        vector<int> res;
        helper(A, 0, res, ss);
        sort(ss.begin(), ss.end());
        return ss;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends