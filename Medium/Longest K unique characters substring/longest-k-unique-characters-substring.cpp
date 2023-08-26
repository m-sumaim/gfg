//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int sizeofss = -1;
    map<char, int> mp;
    int i=0;
    int n = s.size();
    for(int j=0; j<n; j++)
    {
        char c = s[j];
        mp[c]++;
        
        if(mp.size() == k)
            sizeofss = max(sizeofss, j-i+1);
        
        else if(mp.size()>k){
            mp[s[i]]--;
            if(mp[s[i]] == 0)
                mp.erase(s[i]);
            i++;
        }
    }
    return sizeofss;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends