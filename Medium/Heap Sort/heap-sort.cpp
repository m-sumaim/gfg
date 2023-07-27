//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      int largest = i;
      int left = 2*i+1;
      int right = 2*i+2;
      
      if(left<n and arr[left] > arr[largest])
            largest = left;
      if(right<n and arr[right] > arr[largest])
            largest = right;
            

//if we found child greater than the parent make child parent

      if(largest != i)
      {
          swap(arr[i], arr[largest]);
          heapify(arr, n, largest);             // maintain the heap again
      }
    }
    
    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int N)
    {
        for(int i = N/2-1; i>=0; i--)       // only heapify the non-leaf nodes (or internal nodes)
            heapify(arr, N, i);
        
        
        // swap max with min in each iteration, then reduce the  array size by 1
        // so the current max reaches its correct position
        for(int i=N-1; i>0; i--)            
        {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);                 // heapify the zero-th element 
        }
    }
};


// Algorithm:-      
//      - Build a max heap
//      - for each element in array
//          - Swap root element with last element
//          - Heapify the array
//          - Decrement array size by 1
//      - Print the array




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends