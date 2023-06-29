//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    static int isHappy(int N)
    {
        if(N==1 || N==7)                // 1 and 7 are the only single digit numbers that will lead to 1, by intution
            return 1;
        
        int sum = N, curr = N;
        while(sum>9){                   // keep summing the digits of sum of squares as long as a single digit is encountered
            sum = 0;
            while(curr > 0)
            {
                int x = curr%10;
                sum += x*x;
                curr /= 10;
            }
            
            if(sum == 1)                // same condition for 1
                return 1;
            
            curr = sum;
        }
        if(sum == 7)                    // same condition for 7
            return 1;
        
        return 0;
    }

    int nextHappy(int N){
        // code here
        int next = N+1;
        int res = next;
        while(true)                     // check every integer staring from N+1
        {
            if(isHappy(next) == 1)
                return next;
            next++;
            res = next;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends