//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        bool hash[n+1] = {0};
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] >0 && arr[i] <=n)
                hash[arr[i]] = 1;
        }
        
        for(int i=1; i<=n; i++)
            if(hash[i] == 0)
                return i;
        
        return n+1;
                
        
    } 
    
};
    
//Steps :-

// - Create a new list filled with zeros. The size of this list should be equal to the maximum 
// value present in the original array.

// - Go through each element in the original array. If you encounter a positive value, 
// change the corresponding index value in the new list to 1.

// - Once you have modified the list according to the original array, 
// iterate through the modified list.

// - The first occurrence of a zero in the modified list corresponds to the smallest missing number. Return this index value

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends