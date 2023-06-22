//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bills) {
        // code here
        int five = 0, ten = 0, twenty = 0;
        
        for(int i=0; i<n; i++){
            if(bills[i] == 5){
                five++;
                continue;
            }else if(bills[i] == 10){
                if(five>= 1){
                    five -=1;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(five>=1 && ten>= 1){
                    five -= 1;
                    ten -= 1;
                    twenty +=1;
                }else if(five >=3){
                    five -= 3;
                    twenty += 1;
                }else{
                    return false;
                }
            }
        }
        
        return true;
        
        
    // Intution
    
    // There can be 3 cases:

    // 1. You got $5, so that's great, you don't need any change, so simply take it.

    // 2. You got $10, well you need 1 $5 note, else you can't sell it.

    // 3. You got $20, here you should first try to give back change of larger denominations, i.e. $10, and then $5, because you should save the $5 for future purposes, think just like a shopkeeper, greedy. However, if you don't have any $10 left, you have to make use of $5. If you don't even have that, then you're in bad luck my friend. 

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends