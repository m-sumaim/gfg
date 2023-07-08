//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int x)
    {
        // For every a, check if the sum of a+b+c = x
        // where b and c are left and right pointer resp.
        // if sum < x (left++) else (right--)
        sort(arr, arr+n);
        for(int i=0; i<n; i++)
        {
            int left = i+1, right = n-1;
            while(left<right)
            {
                if(arr[left] + arr[right] + arr[i] == x)
                    return true;
                else if(arr[left] + arr[right] + arr[i] < x)
                    left++;
                else
                    right--;
            }
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends