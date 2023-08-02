//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int index, vector<vector<int>> &adj, vector<int> &visited)
  {
      visited[index]=1;
      for(int i=0; i<adj[index].size(); i++)
      {
          if(adj[index][i]==1 && visited[i] == 0)
          {
              visited[i] = 1;
              dfs(i, adj, visited);
          }
      }
  }
  
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        // do graph traversal starting from each index 
        // keep a count variable, that will return the total components
        // if a single node visits all then 1 component, so on....
        vector<int> visited(V,0);
        int count = 0;
        for(int i=0; i<V; i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(i, adj, visited);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends