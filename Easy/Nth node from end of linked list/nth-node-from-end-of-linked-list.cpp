//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        // Fast and slow pointer technique
           // Optimal(make first pointer 'n' step ahead of second pointer)
           // so when first reaches end, return second
           
        Node *first = head, *second = head;
        while(first != NULL)
        {
            if(n != 0){                     // move first n steps ahead
                first = first->next;
                n--;
            }else{                          
                first = first ->next;
                second = second->next;
            }
        }//after this loop the 2nd pointer is n steps behind 1st
        
        
        if(n > 0)              // i.e if n > size of linked list
            return -1;
        
        return second->data;
           
        // --- Brute force ---  
        
        //   Node *curr = head;
        //   int size = 1;
        //   while(curr->next != NULL)
        //   {
        //       curr = curr->next;
        //       size++;
        //   }
        //   int i = size-n;
        //   if(i < 0)
        //         return -1;
            
        //     Node *temp = head;
        //   while(i--)
        //       temp = temp->next;
          
        //   int x = temp->data;
        //   return x;
    }
};



//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends