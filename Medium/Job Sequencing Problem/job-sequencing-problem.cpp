//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

// 

class Solution 
{
    public:
    
    static bool comparison(Job a, Job b){
        return (a.profit > b.profit);
    }
    
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        
        // Intution
        // Sort all jobs in decreasing order of profit. 
        // Iterate on jobs in decreasing order of profit.For each job , do the following : 
        // Find a time slot i, such that slot is empty and i < deadline and i is greatest.Put the job in this slot and mark this slot filled. 
        // If no such i exists, then ignore the job. 
        
        sort(arr, arr+n, comparison);
        vector<bool> vis(n, false);
        
        int jobcnt = 0, maxprofit = 0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=arr[i].dead-1; j>=0; j--){
                if(vis[j])
                    continue;
                else{
                    vis[j] = true;
                    maxprofit += arr[i].profit;
                    jobcnt++;
                    break;
                }
            }
        }
        return {jobcnt, maxprofit};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends