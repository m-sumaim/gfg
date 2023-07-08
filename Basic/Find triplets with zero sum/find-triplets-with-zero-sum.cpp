//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        // We can take a number and find the other two elements s.t. x+y+z = 0
        // i.e. y+z = -x
        // So for every 'x' check three condition >,<,==
        // Based on this move to right, left or return(when equal)
        sort(arr, arr+n);
        for(int i=0; i<n; i++)
        {
            int left = i+1, right = n-1;
            while(left < right)
            {
                if(arr[left] + arr[right] == -arr[i])
                    return true;
                else if(arr[left] + arr[right] < -arr[i])
                    left++;
                else if(arr[left] + arr[right] > -arr[i])
                    right--;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends