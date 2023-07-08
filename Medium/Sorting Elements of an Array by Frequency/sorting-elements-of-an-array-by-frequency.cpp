//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool cmp(pair<int, int> a, pair<int,int> b)
    {
        if(a.second>b.second)
            return true;
        else if(a.second < b.second)
            return false;
        else if(a.first < b.first)              // if a.second == b.second
            return true;                        // return the smaller one
        else
            return false;
    }
    
    
    
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        vector<pair<int, int>> temp;
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++)
        {
            freq[arr[i]]++;
        }
        for(auto it =freq.begin(); it!=freq.end(); it++)
        {
            temp.push_back(*it);            
            // here *it is pushed back cuz we want the contents of the location 
            // pointed at to be copied; if "it" was simply pushed, it wont push
            // the complete pair
        }
        sort(temp.begin(), temp.end(), cmp);
        vector<int>ans;
        for(auto it = temp.begin(); it!=temp.end(); it++)
            for(int i=0; i<it->second; i++)
                ans.push_back(it->first);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends