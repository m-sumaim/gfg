//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        // three pointer approach
        
        int res =0, diff = INT_MAX, n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n-2; i++)            // we're using a triplet so n-2
        {
            int low = i+1, high = n-1;
            while(low<high)
            {
                // for every 'i' make a triplet 'i + low + high' and keep incrementing/decrementing 
                // while following the conditions of difference                                                
                int sum = arr[i] + arr[low] + arr[high];        
                if(sum == target)
                    return target;
                
                else if(abs(sum - target) < diff)
                {
                    diff = abs(sum - target);
                    res = sum;
                }
                
                else if(abs(sum - target) == diff)
                    res = max(res, sum);
                
                
                if(sum<target)              // try forming a new sum (i + (low+1) + high)
                    low++;
                else                        // (i + low + (high+1))
                    high--;
            }
        }
        
        return res;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends