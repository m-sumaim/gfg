//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function Template for C++



// Shorcut way t oconvert digit to binary

// #include<bitset>
// int digit = 12;
// bitset binary(digit);

class Solution{
public:
    int find(int A,int B){
  
    
    // Intution
    
// 0: 0000      // 1: 0001      // 2: 0010       // 3: 0011      // 4: 0100      // 5: 0101
// 6: 0110      // 7: 0111      // 8: 1000      // 9: 1001      // 10: 1010     // 11: 1011
// 12: 1100     // 13: 1101     // 14: 1110     // 15: 1111


    // we can observe that any number whose remainder is 2 or 3 when % with 4 will have 1 at the second LSB 
    
        int ans=0;
        
        // if A%4 == 1 then A+1 and A+2 will haveb1 at there 2nd least significant bit
        // so we increase the range by 3 and add 2 to answer
        if(A%4==1)
        {
            A+=3;
            ans+=2;
        }
        
        // if A%4 == 2 then A and A+1 will have 1 at there 2nd least significant bit
        // so we increase the range by 2 and add 2 to answer
        else if(A%4==2)
        {
            A+=2;
            ans+=2;
        }
        
        // if A%4 == 3 then only A will have 1 at there 2nd least significant bit
        // so we increase the range by 1 and add 1 to answer
        else if(A%4==3)
        {
            A+=1;
            ans+=1;
        }
        
        // if B%4 == 2 then only B will have 1 at there 2nd least significant bit
        // so we decrease the range by 2 and add 1 to answer
        if(B%4==2)
        {
            B=B-2;
            ans+=1;
        }
        
        // if A%4 == 3 then B and B-1 will have 1 at there 2nd least significant bit
        // so we decrease the range by 3 and add 2 to answer
        else if(B%4==3)
        {
            B=B-3;
            ans+=2;
        }
        
        // every number which has remainder when devided by 4 as 2 or 3 will have 1 at there 2nd LSB
        ans+=(B-A)/4*2;         //every block of size 4 will have 2 such numbers
        return ans;
    
    }
    
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B;
        cin>>A>>B;
        Solution ob;
        cout << ob.find(A,B) << endl;
    }
    return 0; 
}
// } Driver Code Ends