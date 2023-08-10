//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

        vector<int> DistinctSum(vector<int>nums){
            long long sum = 0;
            int n = nums.size();
            for(int i=0; i<n; i++)
                sum+= nums[i];
            
            vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
            for(int i=0; i<=n; i++)
                dp[i][0] = 1;
            
            for(int i=1; i<=n; i++)
            {
                for(long long int j=1; j<=sum; j++)
                {
                    if(j < nums[i-1])
                        dp[i][j] = dp[i-1][j];
                    else
                        dp[i][j] = max(dp[i-1][j], dp[i-1][j-nums[i-1]]);
                }
            }
            
            vector<int> ans;
            ans.push_back(0);
            for(int i=1; i<=sum; i++)
                if(dp[n][i] != 0)
                    ans.push_back(i);
            
            return ans;
        }
        


/* My Solution but TLE */

//     void helper(vector<int> &nums, vector<int> &aux, set<int> &sums, int i)
//     {
//         if(i >= nums.size())
//         {
//             int sum = 0;
//             for(int j=0; j<aux.size(); j++)
//             {
//                 sum+=aux[j];
//             }
//             sums.insert(sum);
//             return;
//         }
        
//         aux.push_back(nums[i]);
//         helper(nums, aux, sums, i+1);
//         // backtrack
//         aux.pop_back();
//         helper(nums, aux, sums, i+1);
//     }


// 	vector<int> DistinctSum(vector<int>nums){
// 	    // Code here
// 	    vector<int> aux;
// 	    // vector<int> res; since we need distinct sum so a vector won't be used, instead use set
// 	    set<int> sums;
// 	    helper(nums, aux, sums, 0);
//         vector<int> res(sums.begin(), sums.end());
// 	    return res;
// 	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int> ans = obj.DistinctSum(nums);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}

// } Driver Code Ends