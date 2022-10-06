//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector <int> vn;
	    vector<int> vp;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        vn.push_back(arr[i]);
	        else
	        vp.push_back(arr[i]);
	    }
	    int k=0,l=0;
	    int i=0;
	    for( i=0;i<n;i++)
	    {
	        if(i%2==0 && k<vp.size())
	        {
	            arr[i]=vp[k];
	            k++;
	        }
	        else if(l<vn.size())
	        {
	            arr[i]=vn[l];
	            l++;
	        }
	        else
	        break;
	    }
	    while(k<vp.size())
	    {
	        arr[i]=vp[k];
	        i++;
	        k++;
	    }
	    while(l<vn.size())
	    {
	        arr[i]=vn[l];
	        i++;
	        l++;
	    }
	    
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends