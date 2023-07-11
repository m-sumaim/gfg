//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		// ~  Take  4 pointers TOP(top row) , BOTTOM(bottom row) , LEFT(left col) , RIGHT(right col)
 		// ~ Initialise  TOP = 0 (first row) , BOTTOM = N-1 (last row) , LEFT=0 (first column) ,RIGHT=M-1(last column).
 		// int cnt (to count the elements traversed)
 		// while(top < bottom and left < right)
 		// take 4 for() loops 1(left to right), 2(top to bottom), 3(right to left), 4(bottom to top)
 		// while changing top++, right--, bottom--, left++
 		
 		
 		int top = 0, bottom = n-1, left = 0, right = m-1;
 		int cnt = 0;
 		while(top<=bottom and left<=right)
 		{
 		    for(int i=left; i<=right; i++)          // left to right
 		    {
 		        cnt++;
 		        if(cnt == k)
 		            return a[top][i];
 		    }
 		    top++;
 		    
 		    for(int i=top; i<=bottom; i++)          // top to bottom
 		    {
 		        cnt++;
 		        if(cnt == k)
 		            return a[i][right];
 		    }
 		    right--;
 		    
 		    if(top <= bottom)                   // right to left
 		    {
 		        for(int i=right; i >= left; i--)
 		        {
 		            cnt++;
 		            if(cnt == k )
 		                return a[bottom][i];
 		        }
 		        bottom--;
 		    }
 		    
 		    if(left <= right)                   // bottom to top
 		    {
 		        for(int i =bottom; i>=top; i--)
 		        {
 		            cnt++;
 		            if(cnt == k)
 		                return a[i][left];
 		        }
 		     left++;
 		    }
 		}
 		return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends