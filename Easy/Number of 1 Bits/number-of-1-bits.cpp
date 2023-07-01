//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Check whether at the 0th index, the bit is set or not, if it is set,
        // then increment the count. After each iteration, just right shift N by 1,
        // until N becomes equals to 0.
        
        int cnt = 0;
        while(N!=0)         // right shift N until it becomes zero
        {
            if(N&1)         // check whether the bit at 0th index is set
                cnt ++;
                
            N >>=1;         // arithmetic right sift N by 1 (this is not the logical right shift)
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends