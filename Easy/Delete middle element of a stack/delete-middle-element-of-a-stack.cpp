//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n)
    {
        // Iterative : store all the elements above the mid, in another stack / vector
        // then remove the mid of stack and push the popped elements from the temp stack to original
        stack<int> temp;                // or vector<int>
        int mid = n/2;
        
        while(mid--)
        {
            temp.push(s.top());
            s.pop();
        }
        s.pop();
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        
        
    }
};

// Recursive
// void del(stack<int>& s, int i)
// {
//     if(i==1)                    // remove mid
//     {
//         s.pop();
//         return;
//     }
//     int temp = s.top();         // remove the element above mid
//     s.pop();
    
//     del(s, i-1);
    
//     s.push(temp);               // push back the removed elements above the mid
//     return;
// }
// void deleteMid(stack<int>& s, int n)
// {
//     int mid = n/2 + 1;
//     del(s,mid);
// }

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends