//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here  
        vector<pair<int,int>> ans;
        sort(A, A+N);
        sort(B, B+M);
        reverse(B, B+M);
        
        int st1 = 0, st2 = 0;
        while(st1 != N && st2 != M)
        {
            if(A[st1] + B[st2] == X)
            {
                ans.push_back(make_pair(A[st1], B[st2]));
                ++st1;
                ++st2;
            }
            else if(A[st1] + B[st2] < X)
                ++st1;
            else if(A[st1] + B[st2] > X)
                ++st2;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends