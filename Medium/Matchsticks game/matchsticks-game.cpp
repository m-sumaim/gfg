//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int matchGame(long long N) {
        // code here
        return N%5 == 0 ? -1 : N%5;

      // Intution:
        // If N is divisible by 5, it means that no matter how many matchsticks A picks on his first turn,
        // B can always pick the remaining matchsticks such that A will be left with the last matchstick and lose the game. 
        // In this case, it is impossible for A to win, so we return -1.

        // If N is not divisible by 5, A can pick a number of matchsticks that leaves a remaining number that is divisible by 5. 
        // This ensures that A can force B into a position where B will always be left with a number of matchsticks that is divisible by 5,
        // allowing A to win the game.

        // Therefore, the number of matchsticks A should pick on his first turn is (N % 5). 
        // This guarantees that A will win the game if N is not divisible by 5. 
        // Otherwise, it is impossible for A to win, and -1 is returned.

        // Example 1:
        // If N = 9, A should pick (9 % 5) = 4 matchsticks on his first turn to guarantee a win.
        // If N = 15, it is impossible for A to win, so -1 is returned.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
