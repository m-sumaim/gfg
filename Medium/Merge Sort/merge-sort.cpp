//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int B[r+l];
         int i = l;
         int j = m+1;
         int k = l;             // used to fill up B[]
         
         while(i<=m && j<=r)
         {
             if(arr[i] < arr[j])
                B[k++] = arr[i++];          // eq. to B[k] = arr[i]; k++; i++;
            else
                B[k++] = arr[j++];
         }
         // if right part of array gets over before left, then left has some elements left over, so add them as well
         for(; i<=m; i++)
            B[k++] = arr[i];
        
        // if left has gets over before right, then add left elements from the right subarray
        for(; j<=r; j++)
            B[k++] = arr[j];
        
        // finally copy B[] into A[]
        for(int x = l; x<=r; x++)
            arr[x] = B[x];
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
            return;
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends