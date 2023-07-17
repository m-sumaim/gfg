//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		   int freq[26] = {0};              // to count freq of char
		   
		   // push char to queue only when the freq of that char is equal to 1 else pop the char from queue when the freq > 1
		   queue<int> q;     
		   
		   string ans = "";                 // to store the final sol
		   
		   for(int i=0; i<A.length(); i++)
		   {
		       freq[A[i] - 'a']++;                              // count freq
		       if (freq[A[i] - 'a'] == 1)                       // if freq == 1, add it to queue
		            q.push(A[i]);
		      while(!q.empty() and freq[q.front() - 'a'] > 1)  // if freq > 1 then pop the char until the queue is not empty
		            q.pop();
		      
		      if(q.empty())                     // if queue has no freq==1 element, then add # to sol
		            ans+='#';
		      else                              // if queue has freq ==1 element, at present then add the char to the sol
		            ans+= q.front();
		   }
		   return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends