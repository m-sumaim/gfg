//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
       
        int diff = INT_MAX, sum;
        int first, second;
        int i=0, j=arr.size()-1;
        while(i<j)
        {
            sum = arr[i] + arr[j];
            if(abs(sum - x) < diff)
            {
                diff = abs(sum - x);
                first = arr[i];
                second = arr[j];
            }
            
            if(sum>x)
                j--;
            else                // i.e sum < x
                i++;
        }
        
        return {first, second};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends