//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void preorder(vector<int> nums, int start, int end, vector<int> & ans)
    {
        if(start <= end)
        {
            int mid = (start+end)/2;
            ans.push_back(nums[mid]);
            preorder(nums, start, mid-1, ans);
            preorder(nums, mid+1, end, ans);
        }
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // simply do a preorder traversal of the array for 0 to mid and mid to end
        vector<int> ans;
        int n = nums.size();
        preorder(nums, 0, n-1, ans);
        return ans;
    }
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
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends