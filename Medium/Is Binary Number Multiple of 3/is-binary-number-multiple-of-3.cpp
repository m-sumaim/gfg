//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    // since the binary number is very long, it's conversion to decimal would cause TLE
	    
	    // Here we find the set bit on odd and even positions of the given binary string
	    // if the difference in the number of set bit is divisbile by 3, return true;
	    
	    int i, odd = 0, even = 0, n = s.size();
	    for(int i=0; i<n; i++)
	    {
	        if(s[i] == '1')
	        {
	            if(i%2)             
	                odd++;              // 0 based indexing
	            else
	                even++;
	        }
	    }
	    
	    return (odd  - even) % 3 == 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends