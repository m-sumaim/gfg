//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// Algorithm:  

// Create a solution matrix, initially filled with 0’s.
// Create a recursive function, which takes initial matrix, output matrix and position of rat (i, j).
// if the position is out of the matrix or the position is not valid then return.
// Mark the position output[i][j] as 1 and check if the current position is destination or not. If destination is reached print the output matrix and return.
// Recursively call for position (i+1, j) and (i, j+1).
// Unmark position (i, j), i.e output[i][j] = 0.

class Solution{
    public:
    vector<string> ans;
    void solveUtil(int i, int j, vector<vector<int>> &m, int n, string s)
    {
        if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0)    // check if i,j is out of bound or marked as 'blocked'
            return;
        
        if(i==n-1 && j==n-1)                // if we reach the bottom right of matrix
        {
            ans.push_back(s);               // add the string to answer vector
            s="";                           // clear string for the next sol string
            return;                         // return when one solution is found
        }
        
        m[i][j] = 0;                        //include i,j in solution set 
        
        solveUtil(i+1, j, m, n, s+"D");     // check for down
        solveUtil(i-1, j, m, n, s+"U");     // check for up
        solveUtil(i, j+1, m, n, s+"R");     // check for right
        solveUtil(i, j-1, m, n, s+"L");     // check for left
        
        m[i][j] = 1;                        // backtrack and remove i,j from solution
        
    }
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s= "";
        if(m[0][0] ==0)             // if top left is blocked, no solution, so return
            return {};
        if(m[n-1][n-1] == 0)        // if bottom right is blocked, no solution, so return
            return {};
        solveUtil(0,0,m,n,s);       // start checking from (0,0)
        
        
        return ans;                 // finally return the answer vector
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends