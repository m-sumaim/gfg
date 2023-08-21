//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& a) {
        // Code here
        int r[] = {-1, -1, -1, 0, 1, 1, 1, 0};      // direction for row
        int c[] = {-1,  0,  1, 1, 1, 0, -1, -1};    // directions of column
        
        int n = a.size();
        int m = a[0].size();
        
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               int count  = 0;
               if(a[i][j] ==1){
                   for(int k=0; k<8; k++){          // move in all 8 directions
                       int nr = i+r[k];             // new row
                       int nc = j+c[k];             // new col
                       if(nr>=0 and nr<n and nc>=0 and nc <m){
                           if(a[nr][nc] == 0)
                                count++;
                       }
                   }
                   if(count >0 and count%2 == 0)    // check
                    res++;
               }
            
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends