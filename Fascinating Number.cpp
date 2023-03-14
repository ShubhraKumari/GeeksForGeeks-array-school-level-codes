//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    if(n>=100)
	    {
	        string s=to_string(n)+to_string(n*2)+to_string(n*3);
	        int arr[9]={0};
	        for(int i=0;i<s.length();i++)
	        {
	            arr[s[i]-'0'-1]++;   
	        }
	        for(int i=0;i<9;i++)
	        if(arr[i]!=1)
	        return false;
	    }
	    return true;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends
