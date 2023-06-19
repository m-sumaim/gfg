//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // We implement the same greedy approach where we first sort the activities accroding to the finsih time
        // then we take push all the activities into a prority-queue(min-heap)
        // take out the top and insert into result vector
        // then take out the next top and compare: if(finish_time_of_previous <= start_time_of_new) 
        //                                               pop_the_top_and_insert_into_solution
        // else take it out and donot add to solution
        
        // Here we're using a vector and sorting it while keeping the end at the first position in a pair
        
        pair<int, int> arr[n];
        for(int i=0; i<n; i++){
            arr[i] = {end[i], start[i]};
        }
        sort(arr, arr+n);
        int res = 1;
        int prev = 0;
        for(int curr = 1; curr<n; curr++){
            if(arr[prev].first < arr[curr].second){            
                // we're comparing prev's first with curr's second cuz we changed the pair to (end, start) in the solution      
                res++;
                prev=curr;
            }
        }
        
        return res;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends