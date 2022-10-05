//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector <int>vn;
    vector <int>vp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            vn.push_back(arr[i]);
        else
            vp.push_back(arr[i]);
    }
    for(int i=0;i<vp.size();i++)
        arr[i]=vp[i];
    int k=0;
    for(int i=vp.size();i<n;i++)
    {
        arr[i]=vn[k];
        k++;
    }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends