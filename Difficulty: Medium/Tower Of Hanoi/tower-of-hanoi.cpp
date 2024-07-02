//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    long long res = 0;

// a - > from, b->to, c->aux
long long toh(int n, int a, int b, int c) {
    if(n==0)
        return 0;
    if(n==1){
        cout<<"move disk 1 from rod "<<a<<" to rod "<<b<<endl;
        res++;
        return res;
    }
    toh(n-1, a,c,b);
    cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<b<<endl;
    res++;
    toh(n-1, c,b,a);
}
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

// } Driver Code Ends