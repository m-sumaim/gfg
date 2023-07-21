//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head == NULL or head ->next == NULL)
            return head;
        // if curr > curr->next then copy next to curr
        // then delete curr->next
        // then start from the head again
        // else iterate
        Node *curr = head;
        while(curr->next != NULL)
        {
            if(curr->data < curr->next->data)
            {
                curr->data = curr->next->data;
                Node *temp = curr->next;                // first store next to be dlelted
                curr->next = curr->next->next;
                delete temp;
                curr = head;
            }else{
                curr = curr->next;
            }
        }
        return head;
    }
  // there could still be many more approaches  
  // -- Recursion --
//   Node *compute(Node *head)
//     {
//         if (!head->next)
//             return head;
//         head->next=compute(head->next);
//         return (head->data < head->next->data)?head->next:head;
//     }
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends