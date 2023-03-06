#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int print2largest(int arr[], int n){
	// Function returns the second
	// largest elements
	sort(arr,arr+n,greater<int>());
	int seclarge=-1;
	for(int i=0;i<n-1;i++)
	{
	    if(arr[i]!=arr[i+1]){
	        seclarge=arr[i+1];
	        break;}
	}
	return seclarge;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
