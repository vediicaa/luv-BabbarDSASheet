//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

//{ Driver Code Starts.

int main() {
   int n,m,target;
   cin>>n>>m>>target;
   int right=m-1,down=n-1;
   int left=0,up=1;
   int arr[n][m];
   int i=0,j=0;
   for(int i=0;i<n;i++)
   {
	for(int j=0;j<m;j++)
	{cin>>arr[i][j];
   }
   }
  int start=0,end=n*m-1;
  int f=0;
  while(start<=end)
    {
        int mid=start+(end-start)/2;
        int ind=arr[mid/m][mid%m];
        if(ind==target)
        {
            f=1;
            break;
        }
        else if(target<ind)
        end=mid-1;
        else
        start=mid+1;
    }
    if(f==1)
    cout<<"Element found"<<"\n";
    else
    cout<<"Element not found"<<"\n";
   }


// } Driver Code Ends