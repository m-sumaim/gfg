//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // SORTING TECHNIQUE🙂🙂🙂
// The approach heavily depends on the idea of sorting. 
// If we sort a array of strings, the strings get sorted lexographically,
// which means the strings are sorted according to their character occurrence, 
// so, the first string should be present in all the strings of the sorted array
// and since the last string in array is very different from every other string 
// and hence it was placed last, so if we find the occurrence of our first 
// string in the last string , we will get the common prefix. that's the idea
string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr, arr+N);
        string ans;
        for(int i=0; i<arr[0].length(); i++)
        {
            string x = arr[0];
            string y = arr[N-1];
            if(x[i] == y[i])
                ans.push_back(x[i]);
            else
                break;
        }
        return ans=="" ? "-1" : ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends