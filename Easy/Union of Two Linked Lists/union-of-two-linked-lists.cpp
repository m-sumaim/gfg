//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        APPROACH :

// - Create a set of integers.
// - Iterate through the linked list, storing the values of each node in the set.
// - Create a new linked list by first creating a new node (dummy node).
// - While iterating through the values in the set, create new nodes with the same values and add them to the linked list.
// - Return head->next  because the first node was created only for initializing the linked list.
        
        
        set<int> s;
        Node* curr = head1;
        while(curr)
        {
            s.insert(curr->data);
            curr = curr -> next;
        }
        
        curr = head2;
        while(curr)
        {
            s.insert(curr->data);
            curr = curr -> next;
        }
        
        Node * head = new Node(0);
        curr = head;
        for(auto it : s)
        {
            curr -> next = new Node(it);
            curr = curr -> next;
        }
        
        return head -> next;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends