//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
        
        if(K > N)
            return -1;
        
        long maxsum = 0, currsum=0;
        for(int i=0; i<K; i++)  
            maxsum += arr[i];
        
        currsum = maxsum;
        
        for(int i=K; i<N; i++)
        {
            currsum += arr[i] - arr[i-K];
            maxsum = max(currsum, maxsum);
        }
        
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends