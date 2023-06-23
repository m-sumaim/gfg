//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
// Let's start from the basics. It's clear from the question that the CPU will take at least 'n' units of time, as a single task can be performed at a time.
// Also, you might get the basic idea that the character having the maximum frequency will somehow contribute to getting the answer.
// Let's count the maximum frequency (mx) of the characters present in the array and the number of characters having the maximum frequency (mx_cnt) using a map (you can use a vector too).
// Now, we know the CPU can't repeat the task immediately because of the cooldown period. So, let's understand the cases when the CPU has to go idle and when not, by taking some examples for better understanding.

// From the examples, it's clear that the answer will be max(n,mx_cnt + (mx - 1) * (k + 1)).
// Return the ans.
    
    int mx = 0, mx_cnt = 0;
    // mx -> max frequency        mx_cnt -> no of char having max frquency (incase more than 1 char have same freq)
    unordered_map<char, int> m;
    for(auto i: tasks)
    {
        m[i]++;
        mx = max(mx, m[i]);
        
    }
    for(auto i : m)             // if more than one have same max freq
    {
        if(i.second == mx)
            mx_cnt++;
    }
    
    int val = mx_cnt + (mx-1) * (K+1);
    return max(val, N);                
    // incase k is very small and every element is arranged alternatively without any idle state
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends