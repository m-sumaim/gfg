//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
// Recursion
// 	int palindrome(int l, string S){
	    
// 	   if(l >= (S.size() / 2))
// 	        return 1;
// 	   if(S[l] != S[S.size() - l - 1])
// 	        return 0;
// 	   return palindrome(l+1, S);
// 	}
	
// 	int isPalindrome(string S)
// 	{
// 	    int sol = palindrome(0, S);
// 	    return sol;
// 	}
	
// Two pointer
int isPalindrome(string S){
    int l = 0;
    int r = S.size() - 1;
    while(l<=r)
    {
        if(S[l] != S[r])
            return 0;
        
        l++;
        r--;
    }
    return 1;
}

//reverse() function
// int isPalindrome(string str)
//     {
//         string k=str;
//         reverse(str.begin(),str.end());
//         return str==k;
//     }

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends