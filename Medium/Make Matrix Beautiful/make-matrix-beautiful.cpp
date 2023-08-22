//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > mat, int n)
    {
        // code here 
        // find max sum of each row or column and make every row/column equal to that
        // if greater subtract if smaller then add (+1 for each operation)
        
        int mxRowSum = 0, totalRowSum = 0;
        for(int i=0; i<n; i++)
        {
            int rowSum = 0, colSum = 0;
            for(int j=0; j<n; j++){
                rowSum += mat[i][j];
                colSum += mat[j][i];
                totalRowSum += mat[i][j];
            }
            mxRowSum = max(mxRowSum, max(rowSum, colSum));
        }
        
        int ans = mxRowSum*n - totalRowSum;
        return ans;
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends