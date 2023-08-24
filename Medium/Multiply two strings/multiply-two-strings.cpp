//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
        int prod{0},curr{0};
       
       
       string res="";
       
       int x{0},y{0};
       if(s1[0]=='-' && s2[0]=='-'){
           x=y=1;
       }else if(s1[0]== '-'){
           x=1;
           res.push_back('-');
       }else if(s2[0]=='-'){
           y=1;
           res.push_back('-');
       }
       vector<int> a(s1.length()+s2.length(),0);
       
       for(int i=s1.length()-1;i>=x;i--){
           for(int j=s2.length()-1;j>=y;j--){
               prod = (s1[i]-'0')*(s2[j] -'0');
               curr = a[i+j+1] + prod;
               a[i+j+1]=curr%10;
               a[i+j]+=curr/10;
           }
       }
       
       
       int i=0;
     
       while( i < a.size() && a[i]==0)i++;
       
       
       while(i < a.size()){
           res.push_back(a[i++]+'0');
       }
       
       return res;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends