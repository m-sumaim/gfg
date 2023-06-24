//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    long long toh(int N, int from, int to, int aux) {       // (1,3,2)
    // Your code here
    
    if(N>0)
   {
       toh(N-1,from,aux,to);
       cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<"\n";
       toh(N-1,aux,to,from);
   } 
   return pow(2,N)-1;
   
// Algorithm

// Make a function call for N – 1 th disk.
// Then print the current the disk along with from_rod and to_rod
// Again make a function call for N – 1 th disk.
 }
   
  

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends