//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
// 	void subsequence(string s, string ans, int i, vector<string> &v)
// 	{
// 	    if(i == s.length())                 // push the answer when iterator equal to the end index
// 	    {
// 	        if(ans != "")                   // push unless it's empty
// 	            v.push_back(ans);
	       
// 	       return;          
// 	    }
	    
// 	    subsequence(s, ans+s[i], i+1, v);          
// 	    subsequence(s, ans, i+1, v);                
// 	}
	
	 void powerset(string s,int index,vector<string>& ans,string output)
   {
       if(index==s.length())
        {
            if(output.length()>0)
             ans.push_back(output);
            return ;
        }
        powerset(s,index+1,ans,output+s[index]);         // include the next character    
        powerset(s,index+1,ans,output);                 // don't include the next character
   }
	
	
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    // Created a helper function to 
		    
		    vector<string> ans;
            int index=0;
            string output="";
            powerset(s,index,ans,output);
            sort(ans.begin(),ans.end());
            return ans;
		}
		
		//Alternate approach
// 		vector<string> AllPossibleStrings(string s){
// 		    // Code here
// 		    vector<string>v;
// 		    int n=s.length();
		    
// 		    for(int num=0;num<pow(2,n);num++)
// 		    {
// 		        string sub;
// 		        for(int i=0;i<n;i++)
// 		        {
// 		            if(num & 1<<i)                        
// 		            {
// 		                sub=sub+s[i];
// 		            }
// 		        }
// 		        if(!sub.empty())
// 		        v.push_back(sub);
// 		    }
// 		    sort(v.begin(),v.end());
// 		    return v;
		   
// 		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends