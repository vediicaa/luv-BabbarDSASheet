#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    map <int,int> mp;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
        if(mp[arr[i]]==2)
            return arr[i];
    }
    
    // Write your code here
	
}
