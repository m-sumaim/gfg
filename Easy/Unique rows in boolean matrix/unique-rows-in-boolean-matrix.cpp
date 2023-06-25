//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);


// } Driver Code Ends
class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        
       map<vector<int>, int> mp;
       vector<vector<int>> ans;
       
       for(int i=0; i<row; i++){
           vector<int>v;
           for(int j=0; j<col; j++){
               v.push_back(M[i][j]);
           }
           
           if(!mp[v])   
                ans.push_back(v);
            
            mp[v]++;
       }
       
       return ans;
        
        
// -Create map to store unique rows along with their count.
// -Create result vector.
// -Start a for loop to loop over each row of the matrix and in each iteration:
//     >Create temporary vector from current row.
//     >Check if this vector does not exist in map (i.e., unique).
//     >If so, push it to result vector and put it in map
// -Return result vector
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends