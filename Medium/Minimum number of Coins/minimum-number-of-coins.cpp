//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
       vector<int> coin = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

  int res = 0;
  vector<int> sol;
  for(int i=0; i<coin.size(); i++)
  {
    if(coin[i] <= N)
    {
      int c = (int)floor(N/coin[i]);
      N = N - c * coin[i];
      res += c;
      sol.insert(sol.begin()+res-c, c, coin[i]);
    }
    if(N == 0)
      break;
  }

  return sol;
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends